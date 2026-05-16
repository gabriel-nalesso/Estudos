#include <stdio.h>

int main()
{

  // Aprender a usar operadores matemáticos (+,-,*,/)
  // ex: 5 + 5 = 10

  // Aprender pré/pós incremento/decremento (++ e --)
  // pré incremento: adiciona 1 ao valor da variável e depois usa o valor
  // ex: n1 = 5, n2 = 10
  // n1 = ++n2
  // n1 = 11, n2 = 11

  // pós incremento: usa o valor da variável e depois adiciona 1
  // ex: n1 = 5, n2 = 10
  // n1 = n2++
  // n1 = 10, n2 = 11

  /* decremento é o oposto do incremento */

  // Aprender atribuição simples e com operadores matemáticos
  // Atribuição simples: variável = valor | ex: variável = 5
  // Atribuição com operadores matemáticos: variável *= 3 se torna [variável * 3]
  // ex: n1 = 5, n2 = 3
  // n1 *= n2
  // n1 = 15, n2 = 3

  int numero1 = 5;
  int numero2 = 10;
  int resultado = 10;

  resultado = numero1 + numero2;
  resultado = numero1 - numero2;
  resultado = numero1 / numero2;
  resultado = numero1 * numero2;

  resultado = 10;

  printf("PÓS INCREMENTO\nNúmero 1 antes: %d\n", numero1);
  resultado = numero1++;
  printf("Número 1 após pós-incremento: %d - Resultado (era 0): %d\n", numero1, resultado);

  numero1 = 20;
  resultado = 10;

  printf("\nPRÉ INCREMENTO\nNúmero 1 antes: %d\n", numero1);
  resultado = ++numero1;
  printf("Número 1 após pós-incremento: %d - Resultado (era 0): %d\n", numero1, resultado);

  numero1 = 20;
  resultado = 10;

  printf("\nPÓS DECREMENTO\nNúmero 1 antes: %d\n", numero1);
  resultado = numero1--;
  printf("Número 1 após pós-incremento: %d - Resultado (era 0): %d\n", numero1, resultado);

  numero1 = 20;
  resultado = 10;

  printf("\nPRÉ DECREMENTO\nNúmero 1 antes: %d\n", numero1);
  resultado = --numero1;
  printf("Número 1 após pós-incremento: %d - Resultado (era 0): %d\n", numero1, resultado);
}