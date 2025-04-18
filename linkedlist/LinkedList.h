#ifndef LINKED_LIST
#define LINKED_LIST

#ifndef _STDLIB_H
#include <stdlib.h>
#endif

#define NEW_CONS ((Cons *)malloc(sizeof(Cons)))

typedef enum Data { PERSON, PROFILE, CREDENTIAL } Data;

typedef struct Cons {
  void *data;
  struct Cons *next;
  Data type;
} Cons;

Cons *newList(void *data, Data dataType);
int deleteList(Cons *list);

#endif // !LINKED_LIST
