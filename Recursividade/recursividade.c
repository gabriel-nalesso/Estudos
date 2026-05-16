#include <stdio.h>

/* =================== CHAMA DE 9 A 1 ===================
void recursiva(int numero)
{
  if (numero > 0)
  {
    printf("Número: %d\n", numero);
    recursiva(numero - 1);
  }
}

int main()
{

  int quantidade = 10;

  printf("Contagem regressiva: ");
  recursiva(quantidade);
}
*/

/* ================= MESMA FUNÇÃO CHAMA DE 1 A 10 ===================

void recursiva(int numero)
{
  if (numero > 0)
  {
    recursiva(numero - 1);
    printf("Número: %d\n", numero);
  }
}

int main()
{

  int quantidade = 10;

  printf("Contagem regressiva: ");
  recursiva(quantidade);
}

*/
