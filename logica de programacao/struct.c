#include <stdio.h>
// definindo a estrutura (struct)
struct pessoa {
  char nome[7], rua[25];
  int idade, numero;
};

int main(void) {
  // declaracao de uma variavel struct
  struct pessoa p = {"Celenny", "Rua Tiradentes", 21, 654};
  
  return 0;
}