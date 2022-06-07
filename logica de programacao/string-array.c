#include <stdio.h>
#include <string.h>

int main(void) {
  // lendo e escrevendo uma string
  int i;
  char word[20];
  printf("Digite uma palavra: ");
  scanf("%s", word);
  int len = strlen(word);
  len[]
  printf("A palavra digitada foi %s \n", word);
  printf("Tamanho = %i\n", len);
  // invertendo a palavra
  for (i=len - 1; i >= 0; i--) {
    printf("%c", word[i]);
  }
  return 0;
}