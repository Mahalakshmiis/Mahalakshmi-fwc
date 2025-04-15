#include <stdio.h>

int main() {
  int rows = 5;

  printf("Using while loop:\n");
  int i = 1;
  while (i <= rows) {
    int j = 1;
    while (j <= rows - i + 1) {
      printf("* ");
      j++;
    }
    printf("\n");
    i++;
  }

  printf("\nUsing do-while loop:\n");
  i = 1;
  do {
    int j = 1;
    do {
      printf("* ");
      j++;
    } while (j <= rows - i + 1);
    printf("\n");
    i++;
  } while (i <= rows);

  printf("\nUsing for loop:\n");
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= rows - i + 1; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}