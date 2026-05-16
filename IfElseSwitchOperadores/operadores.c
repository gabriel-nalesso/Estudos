#include <stdio.h>

// Switch, Else, If e operadores lógicos
// && ("e") - Todas as condições precisam ser verdadeiras
// || ("ou") - Pelo menos uma condição precisa ser verdadeira
// ! ("não") - Inverte o valor da condição
// == (igual) - Compara se os valores são iguais
// != (diferente) - Compara se os valores são diferentes
// > (maior) - Compara se o valor da esquerda é maior que o da direita
// < (menor) - Compara se o valor da esquerda é menor que o da direita
// >= (maior ou igual) - Compara se o valor da esquerda é maior ou igual ao da direita
// <= (menor ou igual) - Compara se o valor da esquerda é menor ou igual ao da direita
// % (módulo) - Retorna o resto da divisão
// += (mais igual) - Adiciona o valor da direita ao da esquerda
// -= (menos igual) - Subtrai o valor da direita ao da esquerda
// *= (vezes igual) - Multiplica o valor da direita ao da esquerda
// /= (dividido igual) - Divide o valor da esquerda pelo da direita
// ++ (incremento) - Adiciona 1 ao valor
// -- (decremento) - Subtrai 1 do valor

int main()
{
  /*
  int idade;

  printf("Digite sua idade: ");
  scanf("%d \n", &idade);

  if (idade < 12)
  {
    printf("\nCriança\n");
  }
  else if (idade >= 12 && idade < 18)
  {
    printf("\nAdolescente\n");
  }
  else if (idade >= 18 && idade < 60)
  {
    printf("\nAdulto\n");
  }
  else
  {
    printf("\nIdoso\n");
  }
    */

  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  switch (numero)
  {
  case 1:
    printf("Caso 1\n");
    break;
  case 2:
    printf("Caso 2\n");
    break;
  case 3:
    printf("Caso 3\n");
    break;
  default:
    printf("Caso padrão\n");
  }
}