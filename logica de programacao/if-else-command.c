#include <stdio.h>

int main(void) {
  int num;
  printf("Digite um numero inteiro: ");
  scanf("%i", &num);
  if (num==0) {
    printf("O numero eh IGUAL que zero\n");
  } else {
      if (num > 0) 
        printf("O numero %i eh MAIOR que zero\n", num);
      else 
        printf("O numero %i eh MENOR que zero\n", num);
  }
  
  return 0;
}