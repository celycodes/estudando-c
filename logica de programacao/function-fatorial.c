#include <stdio.h>

int fatorial(int n) {
  int i, f = 1;
  for (i = 1; i <= n; i++) {
      f *= i;
  }
  return  f;
};

int main(void) {
  int num;
  printf("FATORIAL (!)\n");
  printf("Digite n: ");
  scanf("%i", &num);
  printf("%i! = %i\n", num, fatorial(num));
  return 0;
}