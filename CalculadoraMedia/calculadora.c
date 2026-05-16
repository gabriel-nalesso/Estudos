#include <stdio.h>

int main()
{
  float nota1, nota2, nota3;
  float media;

  printf("=== Calculadora de média ===\n");

  printf("Digite a primeira nota: ");
  scanf("%.1f", &nota1);

  printf("\nDigite a segunda nota: ");
  scanf("%.1f", &nota2);

  printf("\nDigite a terceira nota: ");
  scanf("%.1f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  printf("\nA média é: %.2f\n", media);
}