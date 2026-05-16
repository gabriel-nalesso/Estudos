#include <stdio.h>

int main()
{
  /*
  int a = 10;
  int b = 3;
  int soma = a + b;
  int subtracao = a - b;
  int multiplicacao = a * b;
  int divisao = a / b;

  printf("Soma: %d\n", soma);
  printf("Subtracao: %d\n", subtracao);
  printf("Multiplicacao: %d\n", multiplicacao);
  printf("Divisao: %d\n", divisao);

  float a1 = 5.5;
  float b1 = 2.2;
  float somaB = a1 + b1;
  float subtracaoB = a1 - b1;
  float multiplicacaoB = a1 * b1;
  float divisaoB = a1 / b1;

  printf("\nSoma: %.3f\n", somaB);
  printf("Subtracao: %.3f\n", subtracaoB);
  printf("Multiplicacao: %.3f\n", multiplicacaoB);
  printf("Divisao: %.3f\n", divisaoB);
  */

  /* ======================================= CONVERSÃO IMPLICITA =========================================

  int a = 10;
  float b = 3.5;
  float resultado = a + b; //"a" é convertido implicitamente para float

  printf("Resultado: %.2f\n", resultado);
  */

  /* ======================================= CONVERSÃO EXPLÍCITA =========================================

  int a = 10;
  int b = 3;
  float divisão = (float)a / b; // "a" é convertido explicitamente para float

  printf("Divisão: %.250f\n", divisão);
  */
}