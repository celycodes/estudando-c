#include <stdio.h>

int main(void) {
  int x,y,z;
  printf("Digite x: ");
  scanf("%d", &x);
  printf("Digite y: ");
  scanf("%i", &y);

  z = x > y ? x : y;
  printf("O maior numero eh %i\n", z);
  return 0;
}