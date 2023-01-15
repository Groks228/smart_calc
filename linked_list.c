#include "smart_calc.h"

/// @brief frees up the memory allocated for the sheet
/// @param current
void free_list(list_calc_t *current) {
  while (current != NULL) {
    list_calc_t *q = current;
    current = q->next;
    free(q);
  }
}

/// @brief adds a new node to the beginning of the linked list, allocates memory
/// for it and fills the fields with values
/// @param current
/// @param value
/// @param priority
/// @param type
void push(list_calc_t **current, double value, int priority, type_t type) {
  list_calc_t *new_head = (list_calc_t *)calloc(1, sizeof(list_calc_t));
  new_head->value = value;
  new_head->priority = priority;
  new_head->type = type;
  new_head->next = *current;
  *current = new_head;
}

/// @brief removes the first node from the linked list
/// @param current
void pop(list_calc_t **current) {
  if (*current != NULL) {
    list_calc_t *new_head = (*current)->next;
    free(*current);
    *current = new_head;
  }
}

/// @brief flips the linked list
/// @param list
void reverse_list(list_calc_t **list) {
  list_calc_t *tmp1 = {0};
  list_calc_t *tmp2 = {0};
  while ((*list) != NULL) {
    push(&tmp1, (*list)->value, (*list)->priority, (*list)->type);
    pop(list);
  }

  while (tmp1 != NULL) {
    push(&tmp2, tmp1->value, tmp1->priority, tmp1->type);
    pop(&tmp1);
  }

  while (tmp2 != NULL) {
    push(list, tmp2->value, tmp2->priority, tmp2->type);
    pop(&tmp2);
  }
}
