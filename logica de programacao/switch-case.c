#include <stdio.h>

int main(void) {
  char ch;
  printf("Digite um simbolo de pontuacao: ");
  scanf("%c", &ch);
  switch(ch) {
    case '.': printf("ponto\n"); break;
    case ',': printf("virgula\n"); break;
    case ':': printf("dois pontos\n"); break;
    case ';': printf("ponto e virgula\n"); break;
    default: printf("Nao eh pontoacao");
  }
  return 0;
}