#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Feito por: Celenny e Fhilipe
// Atenção: Nesta implementação os polinomios tem a mesma quantidade de termos e os expoentes iguais. 

// Estrutura Polinomio
struct Polinomio {
  int exp;
  int coef;
};

// Procedimento para inserir termos no Polinomio
// optamos por perder um polinomio com três termos
void inserir_termos(struct Polinomio polinomio[]) {
  int c;

  for (c = 0; c < 3; c++) {
    printf("Insira o coeficiente: ");
    scanf("%d", &polinomio[c].coef);
    printf("Insira o expoente: ");
    scanf("%d", &polinomio[c].exp);
  }

  for (c = 0; c < 3; c++) {
    if (polinomio[c].coef > 0) {
      printf("+ %dx^%d ", polinomio[c].coef, polinomio[c].exp);
    } else {
      printf("%dx^%d ", polinomio[c].coef, polinomio[c].exp);
    }
  }
  printf("\n");
}

/*
Na soma pedimos o primeiro polinomio e o segundo e um polinomio novo que 
receberá o resultado da soma. 
1° - Começamos percorrendo os dois polinomios e adicionando a soma no polinomio resultado com auxilo de uma variavel contador no for;
2° - Atribuimos ao exp do polinomio resultado o exp do primeiro;
3° - Depois imprimimos o resultado para o usuário; 
*/

void somar_polinomios(struct Polinomio primeiro[], struct Polinomio segundo[],
      struct Polinomio resultado[]) {
  int c;

  for (c = 0; c < 3; c++) {
    resultado[c].coef = primeiro[c].coef + segundo[c].coef;
    resultado[c].exp = primeiro[c].exp;
  }
  printf("---- Resultado da Soma de polinomios ----\n");
  for (c = 0; c < 3; c++) {
    if (resultado[c].coef > 0) {
      printf("+ %dx^%d ", resultado[c].coef, resultado[c].exp);
    } else {
      printf("%dx^%d", resultado[c].coef, resultado[c].exp);
    }
  }
  printf("\n");
}

/*
Avaliação de polinomio na mais é do que a substituição do valor de X
1° - Pedimos no inicio um valor para x;
2° - Fizemos uso da biblioteca math.h para importar a função pow  que nos da a potencia de um valor;
3°- Realizamos a operação de substituição do x e soma dos termos;
4° - Imprimimos na tela o resultado;
*/

void avaliacao_polinomios(struct Polinomio primeiro[], struct Polinomio segundo[], int resultado) {
  int c, x;
  printf("Digite o valor de x: ");
  scanf("%i", &x);
  for (c = 0; c < 3; c++) {
    resultado += (primeiro[c].coef + segundo[c].coef) * pow(x, primeiro[c].exp);
  }
  printf("--- Resultado da Avaliação de polinomios ---\n");
  printf("%i",resultado);
}

int main() {
  struct Polinomio primeiro[3], segundo[3], resultado[3];
  inserir_termos(primeiro);
  inserir_termos(segundo);
  int result;
  somar_polinomios(primeiro, segundo, resultado);
  avaliacao_polinomios(primeiro, segundo, result);
  return 0;
}