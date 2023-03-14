// int y = 4;
// ^ Allocate place in memory, and give it value 4, [y = 4]


// int* x = &y;
// ^ Allocate place in memory, and let x point to it x->[y = 4]

// printf("%p", &y);
// ^ Prints the memory location (address)

// printf("%d", *x);
// ^ Prints the value that x points to

// printf("%p", &x);
// & Prints the address of x which holds the pointer information


// position starts from 1
void fibunacci(int position, int *result, int *previous, int *prePrevious) {
  if (position < 1) {
    *result = -1;
    *previous = -1;
    *prePrevious = -1;
    return;
  }
  if (position == 1) {
    *result = 0;
    *previous = -1;
    *prePrevious = -1;
    return;
  }
  if (position == 2) {
    *result = 1;
    *previous = 0;
    *prePrevious = -1;
    return;
  }

  *result = 1;
  *previous = 0;

  for (int i = 3; i <= position; i++) {
    int next = *result + *previous;
    *prePrevious = *previous;
    *previous = *result;
    *result = next;
  }

  return;
}