#include <stdio.h>
// operações com ponteiros
int main(void) {
  int *p = 0x5DC; // 1500
  printf("p = %i\n", p);
  p++; // somando 1
  printf("p = %i\n", p); // tipo int ocupa 4 bytes na memoria logo o resultado é 1504
  p--; // subtraindo 1
  printf("p = %i\n", p); // resultado = 1500
  p+=15;
  printf("p = %i\n", p); // resultado 1500 + 4 * 15 = 1560 
  return 0;
}