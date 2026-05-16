#include <stdio.h>

int main()
{

  for (int i = 1; i <= 10; i++)
  {

    for (int j = 1; j <= 10; j++)
    {
      printf("i = %d\n", i);
      printf("j = %d\n", j);
      printf("Resultado da multiplicação: %d\n", i * j);
    }

    printf("\n");
  }
}