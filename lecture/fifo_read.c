#include <fnctl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
  int fifo = mkfifo();
  return 0;
}
