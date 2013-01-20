/**
 *
 * char *strcpy(char *s1, const char *s2);
 *
 * [CWE-193: Off-by-one Error](http://cwe.mitre.org/data/definitions/193.html)
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char buf[4];
  //char buf[5];
  strcpy(buf, "1234");
  printf("%s\n", buf);
  return 0;
}
