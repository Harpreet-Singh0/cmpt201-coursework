#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>

int main(int argc, char **argv) {
  char *path = argv[1];
  struct stat s;
  if (stat(path, &s) == -1) {
    perror("stat");
  }
  if (S_ISREG(s.st_mode)) {
    printf("Regular file\n");
  } else if (S_ISDIR(s.st_mode)) {
    printf("Directory\n");
  } else {
    printf("other\n");
  }

  return 0;
}
