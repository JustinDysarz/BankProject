#include "LinkedList.h"

Cons *newList(void *data, Data dataType) {
  Cons *cons = NEW;
  cons->type = dataType;
  cons->data = data;
  return cons;
}

int deleteList(Cons *list) {
  if (list != NULL)
    while (list->next != NULL) {
      Cons *temp = list;
      list = temp->next;
      free(temp);
    }
  return 1;
}
