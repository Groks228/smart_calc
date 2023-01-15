#ifndef SMART_CALC_H
#define SMART_CALC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * The enumeration containing all possible types contained in an arithmetic
 * expression
 */
typedef enum type_t {
  NUM = 1,
  X = 2,
  PLUS = 3,
  MINUS = 4,
  MUL = 5,
  DIV = 6,
  MOD = 7,
  EXP = 8,
  COS = 9,
  SIN = 10,
  TAN = 11,
  ACOS = 12,
  ASIN = 13,
  ATAN = 14,
  SQRT = 15,
  LN = 16,
  LOG = 17,
  BRACK_O = 18,
  BRACK_C = 19,
} type_t;

/**
 *priority of operations \n
 *-1 () \n
 *0 x, num \n
 *1 + - \n
 *2 * / mod \n
 *3 ^ \n
 *4 sin cos tan acos asin atan ln lg \n
 */
typedef struct list_calc_t {
  double value;             /**< value if num or x */
  int priority;             /**< priority for RPN and calculations in RPN */
  type_t type;              /**< type */
  struct list_calc_t* next; /**< pointer to next node*/
} list_calc_t;

/* linked_list.c */
void reverse_list(list_calc_t** list);
void free_list(list_calc_t* current);
void push(list_calc_t** current, double value, int priority, type_t type);
void pop(list_calc_t** current);

/* parser.c */
int parser(const char* input_string, char* pars_string);
int push_string_to_list(char* parse_string, list_calc_t** head);
int checker(list_calc_t* head);

/* reversed_polish.c */
int infix_to_reversed_polish(list_calc_t* input, list_calc_t** result);

/* calculations.c */
int binary_operations(int type, double num1, double num2, double* result);
int unary_operations(int type, double num, double* result);
int calculation(list_calc_t* input, double x_value, double* result);
int is_binary(type_t type);
int is_unary(type_t type);

/* main function */
int process(const char* input, double x, double* result);

#ifdef __cplusplus
}
#endif

#endif  // SMART_CALC_H