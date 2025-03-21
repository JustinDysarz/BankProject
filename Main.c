#include "Common.h"

int main(int argc, char *argv[]) {
  Cons *list;
  list = newList(NULL, CUSTOMER);
  deleteList(list);
  puts("Hello World");
  exit(EXIT_SUCCESS);
}
