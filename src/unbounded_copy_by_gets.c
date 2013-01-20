/**
 *
 * char *gets(char *s);
 * char *fgets(char *s, int n, FILE *stream);
 */
#include <stdio.h>

int main(int argc, char **argv){
  char buf[256];
  puts("Query> ");
  gets(buf);
  //fgets(buf, sizeof(buf), stdin);
  printf("%s", buf);
}
