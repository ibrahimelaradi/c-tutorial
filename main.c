#include <stdio.h>
#include <string.h>

void main() {
  char msg[] = "BBBCCC";

  strncpy(msg, "WWW", 3);

  printf("%s", msg);
}