#include <stdio.h>

int main()
{
  char opcao;

  printf("Menu Interativo\n");
  printf("J - Jogar\nR - Regras\nS - Sair\n");
  printf("Escolha uma opção: ");
  scanf("%c", &opcao);

  switch (opcao)
  {
  case 'J':
    printf("Jogando...\n");
    break;
  case 'R':
    printf("Regras do jogo...\n");
    break;
  case 'S':
    printf("Saindo...\n");
    break;
  default:
    printf("Opção inválida\n");
    break;
  }
}