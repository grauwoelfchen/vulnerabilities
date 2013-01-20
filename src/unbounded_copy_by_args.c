/**
 *
 * char *strcpy(char *s1, const char *s2);
 * char *strcat(char *s1, const char *s2);
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) { // argc == 3
  char buf[256];
  /* A: check length
  int len;
  len = strlen(argv[1]) + strlen(argv[2]);
  if (len + 1 > sizeof(buf)) {
    puts("error: input too long");
    return -2;
  }
  */
  /* B: malloc (uncomment L29 and comment-out line L11)
  char *buf;
  int len;
  len = strlen(argv[1]) + strlen(argv[2]);
  buf = malloc(len + 1);
  */
  strcpy(buf, argv[1]);
  strcat(buf, argv[2]);
  printf("%s\n", buf);
  //free(buf);
  return 0;
}
