#include "suitecases.h"

// normal
START_TEST(calc_test_1) {
  double res = 0;
  ck_assert_int_eq(process("1+x", 1, &res), 0);
  ck_assert_double_eq(res, 1.0 + 1.0);
  ck_assert_int_eq(process("1+1 - 12 * (5^3) ", 0, &res), 0);
  ck_assert_double_eq(res, -1498.0);
  ck_assert_int_eq(process("1+1-2*3/"
                           "5^2-sin(1)+cos(2)-tan(1)+("
                           "sqrt(2)-log(4)+ln(2))+acos(1)+asin(1)+atan(1)",
                           0, &res),
                   0);
  ck_assert_int_eq(process("10 mod 2", 0, &res), 0);
  ck_assert_double_eq(res, fmod(10, 2));
  ck_assert_int_eq(process("1.1 + 1.1", 0, &res), 0);
  ck_assert_double_eq(res, 1.1 + 1.1);
  ck_assert_int_eq(process("-1.1 + 1.1", 0, &res), 0);
  ck_assert_double_eq(res, -1.1 + 1.1);
}
END_TEST

// error
START_TEST(calc_test_2) {
  double res = 0;
  ck_assert_int_ne(process("hello", 0, &res), 0);
  ck_assert_int_ne(process("1+1)", 0, &res), 0);
  ck_assert_int_ne(process(")1+1 - 12 * (5^3) ", 0, &res), 0);
  ck_assert_int_ne(process("(23_32-3)", 0, &res), 0);
  ck_assert_int_ne(process(")1+2(", 0, &res), 0);
  ck_assert_int_ne(process("1.1.1+1", 0, &res), 0);
  ck_assert_int_ne(process("sqrt(-1)", 0, &res), 0);
  ck_assert_int_ne(process("(+", 0, &res), 0);
  ck_assert_int_ne(process("+)", 0, &res), 0);
  ck_assert_int_ne(process("()", 0, &res), 0);
  ck_assert_int_ne(process("1+1)(1+1", 0, &res), 0);
  ck_assert_int_ne(process("2(", 0, &res), 0);
  ck_assert_int_ne(process(")2", 0, &res), 0);
  ck_assert_int_ne(process("(12))+(12", 0, &res), 0);
  ck_assert_int_ne(process("((3+3)", 0, &res), 0);
}
END_TEST

// error in infix_to_reversed
START_TEST(calc_test_3) {
  list_calc_t *head = {0};
  list_calc_t *reversed_polish = {0};

  push_string_to_list("1+1)", &head);
  ck_assert_int_ne(0, infix_to_reversed_polish(head, &reversed_polish));
  free_list(reversed_polish);
}
END_TEST

// error in infix_to_reversed
START_TEST(calc_test_4) {
  list_calc_t *head = {0};
  list_calc_t *reversed_polish = {0};

  push_string_to_list("(1+1", &head);
  ck_assert_int_ne(0, infix_to_reversed_polish(head, &reversed_polish));
  free_list(reversed_polish);
}
END_TEST

Suite *suite_test(void) {
  Suite *s;
  TCase *tc;
  s = suite_create("smart_calc");
  tc = tcase_create("case_calc");

  tcase_add_test(tc, calc_test_1);
  tcase_add_test(tc, calc_test_2);
  tcase_add_test(tc, calc_test_3);
  tcase_add_test(tc, calc_test_4);

  suite_add_tcase(s, tc);

  return s;
}
