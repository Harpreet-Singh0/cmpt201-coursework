#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>

int main() {

  pid_t pid = fork();
  if (pid == 0) {
    execl("/bin/ls", "/bin/ls", "-a", "-l", "-h", (char *)NULL);
  } else {
    execl("/bin/ls", "/bin/ls", "-a", (char *)NULL);
  }

  printf("%d\n", getpid());
  return 0;
}
