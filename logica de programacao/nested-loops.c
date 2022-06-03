#include <stdio.h>
// aninhamento de repeticoes
int main(void) {
  int i, j;
  for (i = 1; i < 5; i++) {
      for (j = 1; j < 5; j++) {
        if (i == j) {
          printf("1 ");
        } else {
          printf("0 ");
        }
      }
      printf("\n");
  }
  return 0;
}