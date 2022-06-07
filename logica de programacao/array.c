#include <stdio.h>
#define N 5
int main(void) {
  int i;
  float notas[N];
  for (i = 0; i < 5; i++) {
    printf("Digite a nota do  %i° Aluno: ", i+1);
    scanf("%f", &notas[i]);
    printf("Nota: %.1f\n", notas[i]);
  }
  return 0;
}