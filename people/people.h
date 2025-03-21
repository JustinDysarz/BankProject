#ifndef PEOPLE
#define PEOPLE

typedef enum PersonType { ASSOCIATE, CUSTOMER, MANAGER } PersonType;

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
