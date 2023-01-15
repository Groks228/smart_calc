#include "smart_calc.h"

/// @brief translate input list in infix(normal) notation to list in reversed
/// polish notation
/// @param input
/// @param result
/// @return 0 on success, >0 if an error occurs
int infix_to_reversed_polish(list_calc_t* input, list_calc_t** result) {
  int error = 0;
  list_calc_t* stack = {0};

  while (input != NULL) {
    if (input->type == NUM || input->type == X) {
      push(result, input->value, input->priority, input->type);
      pop(&input);
    } else if (input->type == BRACK_O) {
      push(&stack, input->value, input->priority, input->type);
      pop(&input);
    } else if (input->type == BRACK_C) {
      pop(&input);
      while (stack != NULL && stack->type != BRACK_O) {
        push(result, stack->value, stack->priority, stack->type);
        pop(&stack);
      }
      if (stack != NULL && stack->type == BRACK_O)
        pop(&stack);
      else
        error++;

    } else if (input->type >= 3 && input->type <= 17) {
      if (stack == NULL) {
        push(&stack, input->value, input->priority, input->type);
        pop(&input);
      } else if (stack->priority < input->priority) {
        push(&stack, input->value, input->priority, input->type);
        pop(&input);
      } else {
        while (stack != NULL && stack->priority >= input->priority) {
          push(result, stack->value, stack->priority, stack->type);
          pop(&stack);
        }
      }
    } else {
      error++;
    }
  }
  while (stack != NULL) {
    if (stack->type == BRACK_O) error++;
    push(result, stack->value, stack->priority, stack->type);
    pop(&stack);
  }

  reverse_list(result);

  return error;
}

/*
Число - добавляем в стэк вывода
Функция или открывающая скобка помещаем в support stack
*/
