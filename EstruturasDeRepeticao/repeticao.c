#include <stdio.h>

int main()
{

  /*
  ===== ESTRUTURA WHILE ===== SÓ EXECUTA SE A CONDIÇÃO FOR VERDADEIRA
  while (condicao){
  codigo
  }
  */
  /*
    int i = 1;

    while (i <= 5)
    {
      printf("I = %d\n", i);
      i++;
    }
    printf("finalizou");
  */
  /*
===== ESTRUTURA DO-WHILE ===== EXECUTA UMA VEZ, DEPOIS VERIFICA SE A CONDIÇÃO É VERDADEIRA. SE FOR VERDADEIRA, REPETE.
do {
código
} while (i <= 5);
*/
  /*
    int i = 6;

    do
    {
      printf("I = %d\n", i);
      i++;
    } while (i <= 5);   //detalhe: ele verifica se o número é menor que 5, mas como é falso e
                        //a execução acontece antes da primeira verificação, se i = 6, ele exibe
                        //o valor de i e incrementa +1, se tornando i = 7.
     */

  /*
  ===== ESTRUTURA FOR=====

  for(inicialização;condição;incremento){
    codigo
  }
  */
  /*
    for (int i = 1; i <= 5; i++) //pode ser i++ ou i--
    {
      printf("I = %d\n", i); //Detalhe: não precisa declarar a variável antes, pois o prórpio for já inicializa
                              //Detalhe 2: se criar a variável dentro do "for", ela só pode ser usada dentro do "for". (variável local)
    }
   */

  /*
 int i = 0;

 while (i <= 10)
 {

   if (i % 2 != 0)
   {
     printf("O número é: %d, ímpar!\n", i);
   }
   i++;
 }
   */

  /*
 int numero;

 do
 {

   printf("Digite um número par para sair do código: ");
   scanf("%d", &numero);

   if (numero % 2 == 0)
   {
     printf("\nnúmero %d par!\n", numero);
   }
   else
   {
     printf("\nnúmero %d ímpar!\n", numero);
   }

 } while (numero % 2 != 0);

 printf("\nVocê saiu");
 */
  /*
    int numero, i;

    printf("Digite um número para calcular a tabuada: ");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++)
    {
      printf("%d * %d = %d\n", i, numero, i * numero);
    }
      */

  int teste = 5;
  teste += 5;
  printf("%d", teste);
}