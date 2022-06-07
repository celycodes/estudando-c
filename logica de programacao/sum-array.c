#include <stdio.h>

int main(void) {
  // somando os elementos do array
  int i, list[] = {1, 2, 3, 4, 5};
  int sum = 0;
  for (i = 0; i < 5; i++) {
      sum += list[i];
  }
  printf("Soma = %i\n",sum);
  return 0;
}