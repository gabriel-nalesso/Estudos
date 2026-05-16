#include <stdio.h>

int main()
{
  int idade = 5;
  int resultado;
  int num1, num2, maior;

  /* //MÉTODO SIMPLES
  idade > 18 ? printf("Maior de idade\n") : printf("Menor de idade\n");
  */

  /* //MÉTODO COM IF
  resultado = idade >= 18 ? 1 : 0;
  if (resultado == 1)
  {
    printf("Maior de idade\n");
  }
  else
  {
    printf("Menor de idade\n");
  }
  */

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  num1 > num2 ? (maior = num1) : (maior = num2);

  printf("\n\nO maior número é: %d\n", maior);

  /*

Em If Else:
  if (num1 > num2)
  {
    maior = num1;
  }
  else
  {
    maior = num2;
  }

  */
}