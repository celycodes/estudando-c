#include <stdio.h>
#include <string.h>

int main(void) {
  // Verficar o nro de vogais em uma string
  char str[20] = "julia";
  char vogais[11] = "aeiouEIOU";
  int i, j, total = 0;
  int tam1 = strlen(str);
  int tam2 = strlen(vogais);

  for (i=0; i<tam1; i++) {
    for (j=0; j<tam2; j++) {
      if (str[i] == vogais[j]) {
          total++;
          break;
      }
    }
  }

  printf("Numero total de vogais: %i vogais\n", total);
  return 0;
}