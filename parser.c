#include "smart_calc.h"

// проверяет

/// @brief Checks the incoming string for correctness and replaces long function
/// names with single-character ones, skips spaces. Also wraps the expression in
/// parentheses, for the convenience of processing the unary plus and minus
/// @param input_string
/// @param parse_string
/// @return 0 on success, >0 if an error occurs
int parser(const char* input_string, char* parse_string) {
  int err = 0;
  int i = 0, j = 0;
  char operators[] = "+-/()^x*";
  parse_string[j++] = '(';
  while ((input_string[i] != '\0') && !err) {
    if (strchr(operators, input_string[i])) {
      parse_string[j] = input_string[i];
      i++;
      j++;
    } else {
      if (input_string[i] == 's' && input_string[i + 1] == 'i' &&
          input_string[i + 2] == 'n' && input_string[i + 3] == '(') {  // sin
        parse_string[j] = 's';
        parse_string[j + 1] = '(';
        i += 4;
        j += 2;
      } else if (input_string[i] == 'c' && input_string[i + 1] == 'o' &&
                 input_string[i + 2] == 's' &&
                 input_string[i + 3] == '(') {  // cos
        parse_string[j] = 'c';
        parse_string[j + 1] = '(';
        i += 4;
        j += 2;
      } else if (input_string[i] == 't' && input_string[i + 1] == 'a' &&
                 input_string[i + 2] == 'n' &&
                 input_string[i + 3] == '(') {  // tan
        parse_string[j] = 't';
        parse_string[j + 1] = '(';
        i += 4;
        j += 2;
      } else if (input_string[i] == 's' && input_string[i + 1] == 'q' &&
                 input_string[i + 2] == 'r' && input_string[i + 3] == 't' &&
                 input_string[i + 4] == '(') {  // sqrt
        parse_string[j] = 'q';
        parse_string[j + 1] = '(';
        i += 5;
        j += 2;
      } else if (input_string[i] == 'l' && input_string[i + 1] == 'n' &&
                 input_string[i + 2] == '(') {  // ln
        parse_string[j] = 'n';
        parse_string[j + 1] = '(';
        i += 3;
        j += 2;
      } else if (input_string[i] == 'a' &&
                 (input_string[i + 1] == 's' || input_string[i + 1] == 'c' ||
                  input_string[i + 1] == 't')) {  // arc
        parse_string[j] = 'a';
        i += 1;
        j += 1;
      } else if (input_string[i] == 'm' && input_string[i + 1] == 'o' &&
                 input_string[i + 2] == 'd') {  // mod
        parse_string[j] = '%';
        i += 3;
        j += 1;
      } else if (input_string[i] == 'l' && input_string[i + 1] == 'o' &&
                 input_string[i + 2] == 'g' &&
                 input_string[i + 3] == '(') {  // log
        parse_string[j] = 'l';
        parse_string[j + 1] = '(';
        i += 4;
        j += 2;
      } else if ((input_string[i] >= '0' && input_string[i] <= '9') ||
                 input_string[i] == '.') {
        int count = 0;
        do {
          parse_string[j] = input_string[i];
          if (input_string[i] == '.') {
            count++;
          }
          i++;
          j++;
        } while ((input_string[i] >= '0' && input_string[i] <= '9') ||
                 (input_string[i] == '.' && count < 2));
        if (count > 1) {
          err = 1;
        }
      } else if (input_string[i] == ' ') {
        i++;
      } else {
        err = 1;
      }
    }
  }
  parse_string[j++] = ')';
  parse_string[j] = '\0';

  return err;
}

/// @brief get parsed string and push elements to list
/// @param parse_string
/// @param head
/// @return 0 on success, >0 if an error occurs
int push_string_to_list(char* parse_string, list_calc_t** head) {
  char numbers[] = "1234567890.";

  for (; *parse_string != '\0'; parse_string++) {
    if (strchr(numbers, *parse_string)) {
      char* ptr;
      push(head, strtod(parse_string, &ptr), 0, NUM);
      parse_string = ptr - 1;
    } else if (*parse_string == 'x') {
      push(head, 0.0, 0, X);
    } else if (*parse_string == '+') {
      push(head, 0.0, 1, PLUS);
    } else if (*parse_string == '-') {
      push(head, 0.0, 1, MINUS);
    } else if (*parse_string == '*') {
      push(head, 0.0, 2, MUL);
    } else if (*parse_string == '/') {
      push(head, 0.0, 2, DIV);
    } else if (*parse_string == '%') {
      push(head, 0.0, 2, MOD);
    } else if (*parse_string == '^') {
      push(head, 0.0, 3, EXP);
    } else if (*parse_string == 'c') {
      push(head, 0.0, 4, COS);
    } else if (*parse_string == 's') {
      push(head, 0.0, 4, SIN);
    } else if (*parse_string == 't') {
      push(head, 0.0, 4, TAN);
    } else if (*parse_string == 'a') {
      parse_string++;
      if (*parse_string == 'c') {
        push(head, 0.0, 4, ACOS);
      } else if (*parse_string == 's') {
        push(head, 0.0, 4, ASIN);
      } else if (*parse_string == 't') {
        push(head, 0.0, 4, ATAN);
      }
    } else if (*parse_string == 'q') {
      push(head, 0.0, 4, SQRT);
    } else if (*parse_string == 'n') {
      push(head, 0.0, 4, LN);
    } else if (*parse_string == 'l') {
      push(head, 0.0, 4, LOG);
    } else if (*parse_string == '(') {
      push(head, 0.0, -1, BRACK_O);
      if (*(parse_string + 1) == '-' || (*(parse_string + 1) == '+'))
        push(head, 0.0, 0, NUM);
    } else if (*parse_string == ')') {
      push(head, 0.0, -1, BRACK_C);
    }
  }

  reverse_list(head);
  return 0;
}

/// @brief checks the linked list with the expression contained in it for the
/// arithmetic correctness
/// @param head
/// @return 0 on success, >0 if an error occurs
int checker(list_calc_t* head) {
  int error = 0;
  list_calc_t* temp = head;
  int type_prev = 0;
  int brack_o_counter = 0;
  int brack_c_counter = 0;
  int final_close = 0;
  while (temp != NULL) {
    int type = temp->type;

    // case (+
    if (type_prev == BRACK_O && type >= 3 && type <= 8) error++;

    // case +)
    if (type_prev >= 3 && type_prev <= 8 && type == BRACK_C) error++;

    // case *-
    if (type_prev >= 3 && type_prev <= 8 && type >= 3 && type <= 8) error++;

    // case ()
    if (type_prev == BRACK_O && type == BRACK_C) error++;

    // case )(
    if (type_prev == BRACK_C && type == BRACK_O) error++;

    // case x( 2(
    if ((type_prev == NUM || type_prev == X) && type == BRACK_O) error++;

    // case )x )2
    if (type_prev == BRACK_C && (type == NUM || type == X)) error++;

    if (type == BRACK_O) {
      brack_o_counter++;
    }
    if (type == BRACK_C) {
      brack_c_counter++;
      // case (12))+(12
      if (brack_o_counter < brack_c_counter) {
        error++;
      }
      if (brack_c_counter == brack_o_counter) final_close++;
    }

    type_prev = type;
    temp = temp->next;
  }

  // case (()
  if (brack_o_counter != brack_c_counter) error++;

  // case 1)-(1
  if (final_close > 1) error++;

  return error;
}
