#include <stdio.h>

int main(void) {
  int x = 10; // variavel
  int *px; // ponteiro

  // ponteiro px aponta para a variavel x
  px = &x;
  printf("x = %i\n", x); // valor da variavel x
  printf("px = %i\n", px); // endereço da variavel x
  printf("*px = %i\n", *px); // acessando o valor da variavel x pelo ponteiro px
  *px = 11; // modificando indiretamento o valor da variavel x pelo ponteiro px
  printf("x = %i\n", x); 
  printf("*px = %i\n", *px);
  return 0;
}