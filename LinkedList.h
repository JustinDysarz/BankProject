#ifndef LINKED_LIST
#define LINKED_LIST

#ifndef _STDLIB_H
#include <stdlib.h>
#endif

#define NEW ((Cons *)malloc(sizeof(Cons)))

typedef enum Data { ASSOCIATE, CUSTOMER, MANAGER, PROFILE, CREDENTIAL } Data;

typedef struct Cons {
  void *data;
  struct Cons *next;
  Data type;
} Cons;

Cons *newList(void *data, Data dataType);
int deleteList(Cons *list);

#endif
