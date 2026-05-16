#include <stdio.h>

int main()
{
  int i, j;
  // char letra = 'A'; //Se utilizar a variável aqui, antes do loop, muda o comportamento e resposta.

  for (i = 1; i <= 5; i++)
  {
    char letra = 'A';
    for (j = 1; j <= i; j++) // Quando i for 1, j = 1. Quando i for 3, j = 3, sendo assim, quando i limitar em 5, j limita em i.
    {                        // Quando i for 2, j vai executar 2 vezes, por isso, forma a estrutura triângular - MULTIDIMENSIONALIDADE
      printf("%c ", letra);
      ++letra;
    }
    printf("\n");
  }
}