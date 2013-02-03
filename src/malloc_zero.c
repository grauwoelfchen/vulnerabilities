/**
 *
 *
 */
#include <stdlib.h>

int main(int argc, char **argv) {
  char *ptr;
  ptr = malloc(0);
  /* use ptr */
  free(ptr);
  return 0;
}
