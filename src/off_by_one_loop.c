/**
 *
 *
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char buf[4];
  int i;
  memset(buf, 0, sizeof(buf));
  for (i = sizeof(buf); i >= 0; i--) {
  //for (i = (sizeof(buf) - 1); i >= 0; i--) {
    buf[i] = '0' + i;
  }
  printf("%s\n", buf);
  return 0;
}
