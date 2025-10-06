#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main() {
  int pid;
  pid = fork();
  if (pid == 0) {
    printf("CHILD: PID=%d, parent=%d \n", getpid(), getppid());
  } else {
    printf("PARENT: PID=%d, child=%d \n", getpid(), pid);
  }
  return 0;
}
