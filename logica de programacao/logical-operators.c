#include <stdio.h>
// op. logicas
// 0 - false
// 1 - true

int main(void) {
  int result, a = 5, b = 3;
  // OU
  result = (a > 2) || (b < a);
  printf("Resultado = %i\n", result);
  
  // E
  result = (b > 3) && (a > 0);
  printf("Resultado = %i\n", result);
  
  // NEGACAO
  result = !(a > b);
  printf("Resultado = %i\n", result);
  
  return 0;
}