#include <stdio.h>

int fatorial(int n) {
  if (n == 0) { // criterio de parada
    return  1;
  } else { // parametro da chamada recursiva
    return n*fatorial(n - 1);
  }
}

int main(void) {
  int s = fatorial(5);
  printf("%i", s);
  return 0;
}