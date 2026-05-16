#include <stdio.h>

int main()
{

  int opcao;
  float nota1, nota2, media;

  printf("Menu de gerenciamento de estudantes\n");
  printf("1. Calcular média\n");
  printf("2. Determinar status\n");
  printf("3. Sair\n");
  printf("Selecione uma opção: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("\nCalcular a média\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10))
    {
      media = (nota1 + nota2) / 2;
      printf("\nA média é: %.2f", media);
    }
    else
    {
      printf("Entrada incorreta");
    }

    break;

  case 2:
    printf("\nDeterminar status da nota\n");
    printf("Digite a nota final: ");
    scanf("%f", &media);
    printf("\nO resultado é: ");
    if ((media >= 6) && (media <= 10))
    {
      printf("aprovado!");
    }
    else if ((media < 6) && (media >= 0))
    {
      printf("reprovado");
    }
    else
    {
      printf("inválido");
    }

    break;

  case 3:
    printf("\nSair do programa\n");
    break;
  default:
    printf("\nOpção inválida\n");
    break;
  }
}