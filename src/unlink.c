/**
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <inttypes.h>

int read_file(char *filename, char *buf) {
  FILE *fp;
  size_t size;
  fp = fopen(filename, "rb");
  if (fp == NULL) {
    return -1;
  }
  fseek(fp, 0, SEEK_END);
  size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  fgets(buf, size, fp);
  fclose(fp);
  return 0;
}

int main(int argc, char **argv) {
  char *p1, *p2, *p3;
  if (argc < 2) return -1;
  p1 = (char *) malloc(80);
  p2 = (char *) malloc(8);
  p3 = (char *) malloc(8);
  read_file(argv[1], p1);
  free(p1);
  free(p2);
  free(p3);
  return 0;
}
