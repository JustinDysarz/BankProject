#ifndef SECURITY
#define SECURITY

#ifndef _STDLIB_H
#include <stdlib.h>
#endif

#define NEW_CREDENTIAL ((Cons *)malloc(sizeof(Credential)))

typedef struct Credential {
  char *username;
  char *hashedPassword;
  short pin;
} Credential;

char *hash(char *password);
Credential *newCredential(char *username, char *password, short pin);

#endif
