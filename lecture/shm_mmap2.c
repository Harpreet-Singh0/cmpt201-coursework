#define _POSIX_C_SOURCE 200112L
#include <fcntl.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  const char *name = argv[1];
  char *addr;
  size_t len = 100;

  int fd = shm_open(name, O_RDWR, S_IRUSR);
  int size = ftruncate(fd, len);
  addr = mmap(NULL, len, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

  printf("%s\n", addr);
  return 0;
}
