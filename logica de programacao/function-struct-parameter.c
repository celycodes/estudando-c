#include <stdio.h>

struct ponto {
  int x, y;
};

void soma_imprime_valor(int *n) {
    *n = *n + 1;
    printf("Valor = %i\n", *n);
}

int main(void) {
  struct ponto p1 = {0, 9};
  soma_imprime_valor(&p1.x);
  soma_imprime_valor(&p1.y);
  
  return 0;
}