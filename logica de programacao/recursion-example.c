#include <stdio.h>
// recursividade 

int Soma(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n + Soma(n - 1);
  }
}

int main(void) {
  int s = Soma(4);
  printf("%i\n", s);
  return 0;
}