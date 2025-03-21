#include "Common.h"
#include "linkedlist/LinkedList.h"

int main(int argc, char *argv[]) {
  Cons *list;
  list = newList(NULL, PERSON);
  deleteList(list);
  puts("Hello World!");
  exit(EXIT_SUCCESS);
}
