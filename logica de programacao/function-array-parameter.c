#include <stdio.h>
// Função: array como parâmetro
void imprime(int *vet, int n) {
  int i;
  for ( i=0; i < n; i++) {
      printf("%i \n", vet[i]);
  }
}

int main(void) {
  int vet[5] = {1, 2, 3, 4, 5};
  imprime(vet, 5);
  
  return 0;
}