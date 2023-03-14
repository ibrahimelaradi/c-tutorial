#include <stdio.h>
#include <string.h>

int match(char substring[256], char string[256]) {
  for (int i = 0; string[i] != '\0'; i++)
  {
    for (int j = 0; substring[j] != '\0'; j++) {
      int k = i + j;
      if (string[k] != substring[j]) {
        break;
      }
      if (substring[j+1] == '\0') {
        return 1;
      }
    }
  }
  return 0;
}

void search(char term[256], char messages[][256], int count) {
  for (int i = 0; i < count; i++)
  {
    if (match(term, messages[i])) {
      printf("Found a match in \"%s\"", messages[i]);
    }
  }  
}

void main() {
  char messages[5][256] = {
    "Pikachu",
    "Ahmed",
    "Bakkoosh",
    "Ibrahim",
    "Husnein"
  };

  char term[256];
  printf("Enter your search term: ");
  gets(term);

  search(term, messages, 5);
}