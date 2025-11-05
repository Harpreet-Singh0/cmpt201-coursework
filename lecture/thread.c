#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void *foo(void *s) {
  char *msg = (char *)s;
  printf("%s", msg);
  printf("Hello World\n");
  return (void *)strlen(msg);
}

int main() {
  pthread_t thread;
  void *ret_val = 0;
  char *s = "Hey\n";
  pthread_create(&thread, NULL, foo, s);
  pthread_join(thread, &ret_val);
  printf("%lld\n", (long long int)ret_val);

  return 0;
}
