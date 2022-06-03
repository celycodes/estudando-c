#include <stdio.h>

int main(void) {
  int a, b;
  printf("Digite dois valores inteiros: ");
  scanf("%d %d", &a, &b);
  while (a < b) {
    a++;
    printf("%d\n", a);
  }
  return 0;
}