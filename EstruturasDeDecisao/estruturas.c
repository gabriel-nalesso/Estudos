#include <stdio.h>

int main()
{
  // Par ou ímpar

  int numero;
  int resultado;

  printf("Digite um número: ");
  scanf("%d", &numero);

  resultado = numero % 2;

  if (resultado == 0) //"Numero % 2" verifica se o resto da divisão do número por 2 é igual a 0. Se for, é par. Se não, é ímpar.
  {
    printf("O número %d é par!\n", numero);
    printf("O resto é %d\n", resultado);
  }
  else
  {
    printf("O número %d é ímpar!\n", numero);
    printf("O resto é %d\n", resultado);
  }

  /*
  int idade;
  char CNH;
  char genero;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  printf(" \nDigite o seu gênero (M/F): ");
  scanf("%c", &genero);

  printf("\n \nVocê possui CNH? (S/N): ");

  if (idade >= 18, CNH == 'S' || CNH == 's', genero == 'M' || genero == 'm')
  {
    printf("Você pode dirigir!\n");
  }
  else
  {
    printf("Você não pode dirigir!\n");
  }
    */
}