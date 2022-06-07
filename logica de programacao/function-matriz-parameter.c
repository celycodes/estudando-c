#include <stdio.h>
// Fução: Matriz como parâmetro
void imprime_matriz(int mat[][2], int n) {
  int i, j;
  for (i=0; i < n; i++) {
    for (j = 0; j < 2; j++) {
        printf("%i \n", mat[i][j]);
    }
  }
}

int main(void) {
  int mat[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  imprime_matriz(mat, 3);
  return 0;
}