#include <stdio.h>

void modify(int x) {
  x = x + 1;
}

int main() {
  int v = 4;
  modify(v);

  printf("%d\n", v);
  
  return 0;
}