/**
 *
 *
 */
#include <stdio.h>

int main(int argc, char **argv) {
  char *ptr1, ptr2;
  ptr1 = malloc(1024);
  // use ptr1
  free(ptr1);
  ptr2 = malloc(1024);
  // use ptr2
  free(ptr1);
  //free(ptr2);
  return 0;
}

