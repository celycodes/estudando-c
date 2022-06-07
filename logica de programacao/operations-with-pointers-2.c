#include <stdio.h>

int main(void) {
  int *px, *py, x, y;
  x = 9;
  y = 5;
  px = &x;
  py = &y;

  // comparando valores de ponteiros
  if (*px > *py) {
    printf("x é maior");
  } else if (*px < *py) {
    printf("y é maior");
  } else {
    printf("Ponteiros com valores IGUAIS!");
  }
  return 0;
}