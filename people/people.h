#ifndef PEOPLE
#define PEOPLE

typedef struct Profile {
  unsigned int id;
  char *firstName;
  char *lastName;
  char *email;
} Profile;

typedef struct Person {
  Profile *profile;
  // FIX ME add credential
} Person;

#endif
