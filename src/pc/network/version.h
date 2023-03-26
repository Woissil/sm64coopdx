#ifndef VERSION_H
#define VERSION_H

#define VERSION_TEXT "beta"
#define VERSION_NUMBER 32
#define MINOR_VERSION_NUMBER 0
#define PATCH_VERSION_NUMBER 3

#define MAX_VERSION_LENGTH 10
#define MAX_LOCAL_VERSION_LENGTH 11
char* get_version(void);
char* get_version_local(void);

#endif
