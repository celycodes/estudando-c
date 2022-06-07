#include <stdio.h>

int main(void) {
  // maior valor do array
  int i, mylist[5] = {3, 18, 2, 45, 1};
  int bigger = mylist[0];
  for (i = 1; i < 5; i++) {
     if (bigger < mylist[i]) {
        bigger = mylist[i];
     } 
  }
  printf("O maior valor da lista eh %i\n", bigger);
  return 0;
}