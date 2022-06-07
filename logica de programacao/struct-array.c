#include <stdio.h>
// Array de struct
struct pessoa {
  char nome[10], rua[20];
  int idade, numero;
};

int main(void) {
  struct pessoa p[2];
  int i;
  for (i=0; i < 2; i++) {
    gets(p[i].nome);
    scanf("%i", &p[i].idade);
    gets(p[i].rua);
    scanf("%i", &p[i].numero);
  }
  return 0;
}