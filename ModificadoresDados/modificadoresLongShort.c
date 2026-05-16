#include <stdio.h>

int main()
{
  /*
  Tipo	                            Intervalo de valores
  int	                         -2,147,483,648 a 2,147,483,647
  long int	        -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
  double	                        ±1.7E-308 a ±1.7E+308
  long double	                    ±3.4E-4932 a ±1.1E+4932

  ================== ESSE PROGRAMA SÓ FUNCIONA NO UBUNTU (linux) ==================
  ------------------------- LONG DOBRA O TAMANHO DE MEMÓRIA UTILIZADO -------------------------
  Utilizar Unsigned acaba se tornando mais prático no Windows, pois o long int não é tão utilizado

    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;

    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);

    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);

    =================== SHORT É O OPOSTO DE LONG - REDUZ A MEMÓRIA UTILIZADA PELA METADE ==================
    */
}