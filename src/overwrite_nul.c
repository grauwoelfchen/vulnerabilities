/**
 *
 *
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char buf[3][16];
  //char buf[3][17];
  strcpy(buf[0], "0123456789abcdef"); // 16 + 1
  strcpy(buf[1], "0123456789abcdef"); // 16 + 1
  strcpy(buf[2], buf[0]);
  strcpy(buf[2], buf[1]);
  printf("%s\n", buf[0]);
}
