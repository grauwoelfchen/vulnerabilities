/**
 *
 *
 */
#include <stdio.h>
#include <string.h>

void show_message(const char *msg) {
  char buf[80];
  sprintf(buf, "Message: %.64s\n", msg);
  printf(buf);
}

int main(int argc, char **argv) {
  show_message("ppp\x9c\x96\x04\x08%x%x%x%x%x%x%s");
  return 0;
}
