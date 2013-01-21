/**
 *
 * void *malloc(size_t size);
 * char *strcpy(char *s1, const char *s2);
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  char *buf;
  if (argc < 2) {
    return -1;
  }
  buf = malloc(strlen(argv[1]));
  //buf = malloc(strlen(argv[1]) + 1);
  strcpy(buf, argv[1]);
  printf("%s\n", buf);
  free(buf);
  return 0;
}
