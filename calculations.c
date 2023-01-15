#include "smart_calc.h"

/// @brief Gets a string with an expression, then sequentially calls the
/// functions of parsing, checking, translation into reverse polish notation and
/// the calculation function
/// @param input a string with an arithmetic expression
/// @param x the value of x if necessary
/// @param result calculation result
/// @return 0 on success, >0 if an error occurs
int process(const char* input, double x, double* result) {
  char parse_string[512] = "";
  *result = 0;
  int error = parser(input, parse_string);
  if (!error) {
    list_calc_t* head = {0};
    push_string_to_list(parse_string, &head);
    error += checker(head);
    if (!error) {
      list_calc_t* reversed_polish = {0};
      error += infix_to_reversed_polish(head, &reversed_polish);
      if (!error) {
        error += calculation(reversed_polish, x, result);
      } else {
        free_list(reversed_polish);
      }
    } else {
      free_list(head);
    }
  }
  return error;
}
/// @brief the function evaluates an expression written in reverse polish
/// notation
/// @param input a linked list with an expression in reverse polish notation
/// @param x_value the value of x if necessary
/// @param result calculation result
/// @return 0 on success, >0 if an error occurs
int calculation(list_calc_t* input, double x_value, double* result) {
  int error = 0;
  list_calc_t* stack = {0};

  while (input != NULL) {
    double num1 = 0;
    double num2 = 0;
    double res_tmp = 0;
    if (input->type == NUM) {
      push(&stack, input->value, 0, NUM);
    } else if (input->type == X) {
      push(&stack, x_value, 0, NUM);
    } else if (is_binary(input->type)) {
      num2 = stack->value;
      num1 = stack->next->value;
      error += binary_operations(input->type, num1, num2, &res_tmp);
      pop(&stack);
      pop(&stack);
      push(&stack, res_tmp, 0, NUM);
    } else if (is_unary(input->type)) {
      num1 = stack->value;
      error += unary_operations(input->type, num1, &res_tmp);
      pop(&stack);
      push(&stack, res_tmp, 0, NUM);
    } else {
      error = 1;
    }
    pop(&input);
  }
  *result = stack->value;
  pop(&stack);

  return error;
}

/// @brief performs calculations for binary operations
/// @param type type of operation
/// @param num1
/// @param num2
/// @param result
/// @return 0 on success, >0 if an error occurs
int binary_operations(int type, double num1, double num2, double* result) {
  int error = 0;
  if (type == PLUS) {
    *result = num1 + num2;
  } else if (type == MINUS) {
    *result = num1 - num2;
  } else if (type == MUL) {
    *result = num1 * num2;
  } else if (type == DIV) {
    *result = num1 / num2;
    if (fabs(num2 - 0) < 1e-7) error = 1;
  } else if (type == MOD) {
    *result = fmod(num1, num2);
    if (fabs(num2 - 0) < 1e-7) error = 1;
  } else if (type == EXP) {
    *result = pow(num1, num2);
  }

  return error;
}

/// @brief performs calculations for unary operations
/// @param type type of operation
/// @param num
/// @param result
/// @return 0 on success, >0 if an error occurs
int unary_operations(int type, double num, double* result) {
  int error = 0;

  if (type == COS) {
    *result = cos(num);
  } else if (type == SIN) {
    *result = sin(num);
  } else if (type == TAN) {
    *result = tan(num);
  } else if (type == ASIN) {
    *result = asin(num);
  } else if (type == ACOS) {
    *result = acos(num);
  } else if (type == ATAN) {
    *result = atan(num);
  } else if (type == SQRT) {
    if (num < 0) {
      error = 1;
    }
    *result = sqrt(num);
  } else if (type == LN) {
    *result = log(num);
  } else if (type == LOG) {
    *result = log10(num);
  }

  return error;
}

int is_binary(type_t type) { return (type >= 3 && type <= 8); }

int is_unary(type_t type) { return (type >= 9 && type <= 17); }