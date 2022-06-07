#include <stdio.h>

// aninhamento de struct
struct endereco {
  char rua[15];
  int numero;
};

struct pessoa {
  char nome[7];
  int idade;
  struct endereco ender;
};

int main(void) {
  struct pessoa p;
  gets(p.nome);
  p.idade = 20;
  p.ender.numero = 654;
  // lendo estrutura anhinhada pelo teclado
  // scanf("%d", &p.ender.numero);
  gets(p.ender.rua);
  
  return 0;
}