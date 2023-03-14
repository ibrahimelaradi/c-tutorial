#include <stdio.h>

void descend(int arr[], int size) {
  int hasSwapped = 1;
  while (hasSwapped) {
    hasSwapped = 0;

    for (int i = 0; i < (size - 1); i++)
    {
      if (arr[i] < arr[i+1]) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

        hasSwapped = 1;
      }
    }
  }
}

void ascend(int arr[], int size) {
  int hasSwapped = 1;
  while (hasSwapped) {
    hasSwapped = 0;

    for (int i = 0; i < (size - 1); i++)
    {
      if (arr[i] > arr[i+1]) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

        hasSwapped = 1;
      }
    }
  }
}

void printArray(int[], int);

int main() {
  int arr[] = { 1, 2, 5, 4, 3, 6, 7, 8 };
  
  ascend(arr, 8);
  printArray(arr, 8);
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}