#include <stdio.h>

int main(void) {
  // i = linha | j = coluna
  int mat[3][2];
  int i,j;
  for (i=0; i < 3; i++) {
    for (j=0; j < 2; j++) {
        printf("Digite mat[%d][%d]: ", i, j);
        scanf("%d", &mat[i][j]);
    }
  }
  return 0;
}