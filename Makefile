
CC= gcc
CFLAGS= -Wall -Werror -Wextra
SOURCES= calculations.c linked_list.c parser.c reversed_polish.c
OBJECTS=$(SOURCES:.c=.o)
OS= $(shell uname)
TEST_FILES= tests/*.c
PROJECT_NAME= smart_calc

ifeq ($(OS), Darwin)
	TEST_FLAGS=-lcheck
else
	TEST_FLAGS=-lcheck -lpthread -pthread -lrt -lm -lsubunit
endif

all: install

install: build
	cd calc; make
	open calc/smart_calc.app

build: $(PROJECT_NAME).a
	rm -rf calc
	mkdir calc
	cd calc && cmake ../../src/smart_calc

uninstall:
	rm -rf calc
	
execution:
	open calc/smart_calc.app

test: clean $(PROJECT_NAME).a
		$(CC) $(TEST_FLAGS) $(CFLAGS)  $(PROJECT_NAME).a $(TEST_FILES) -o test -g
		./test

gcov_report: clean 
		$(CC) --coverage $(TEST_FLAGS) $(CFLAGS) $(SOURCES) $(TEST_FILES) -o test
		
		./test
		lcov -t "test" -o test.info -c -d . 
		genhtml -o report test.info
	
ifeq ($(OS), Darwin)
	open report/index.html
else
	xdg-open ./report/index.html
endif

clean:
	rm -rf *.a *.so *.out *.o report *.gc* *.info *.txt *.cmake test *.gch *.pdf *.tar  
	rm -rf  *.html *.css test.info test.dSYM report


dvi:
	cd Doxygen; doxygen
	open doxygen/html/index.html

dist: build
	tar  -zcf$(PROJECT_NAME).tar calc


$(PROJECT_NAME).a: clean
		$(CC) $(CFLAGS) $(SOURCES) -c 
		ar rcs $(PROJECT_NAME).a *.o

rebuild:
	make clean
	make all

check: test
	cppcheck --enable=all --suppress=missingIncludeSystem --inconclusive --check-config $(SOURCES) *.c *.h
ifeq ($(OS), Darwin)
	leaks --atExit -- ./test
else
	CK_FORK=no valgrind --vgdb=no --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=RESULT_VALGRIND.txt ./test
endif


linter:
	cp ../materials/linters/.clang-format ..
	clang-format -i *.c *.h tests/*.c tests/*.h
	clang-format -n *.c *.h tests/*.c tests/*.h
	rm -rf ../.clang-format
