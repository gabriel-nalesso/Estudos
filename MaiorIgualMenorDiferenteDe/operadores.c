#include <stdio.h>

int main()
{
  /*
  Os operadores relacionais disponíveis na linguagem C são:
  > (maior que)
  < (menor que)
  >= (maior ou igual a)
  <= (menor ou igual a)
  == (igual a)
  != (diferente de)
  */

  // Exemplo de uso dos operadores relacionais com variáveis de tipo igual
  // Caso a expressão seja verdadeira, o valor retornado será 1, caso contrário, será 0
  /*
  int a = 10;
  int b = 20;

  printf("a > b: %d\n", a > b);
  printf("a < b: %d\n", a < b);
  printf("a == b: %d\n", a == b);
  printf("a != b: %d\n", a != b);
  */

  // Exemplo de uso dos operadores relacionais com variáveis de tipo diferente
  /*
  int x = 5;
  float y = 5.0;
  char c = 'a';

  printf("x == y: %d\n", x == y);
  printf("x != y: %d\n", x != y);

  //Comparar caracteres utiliza a tabela ASCII
  printf("x >= c: %d\n", x >= c);
  printf("O valor ASCII de '%c' é %d: \n", c, c);
  */

  // Exemplo de uso dos operadores relacionais com variáveis de tipo diferente e conversão explícita
  /*
  float numero1 = 10.2;
  int numero2 = 10;

  printf("numero1 > numero2: %d\n", (int)numero1 > numero2);
  printf("numero1 == numero2: %d\n", (int)numero1 == numero2);
  */
}