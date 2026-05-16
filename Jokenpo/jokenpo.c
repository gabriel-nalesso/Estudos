#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* =========================================== IMPORTANTE ===========================================
Passo a Passo para Calcular 22 % 3
Divisão Inteira

Primeiro, divida 22 por 3.
Pergunte-se: quantas vezes 3 cabe em 22?

O quociente (resultado da divisão inteira) é 7, porque 3 vezes 7 é igual a 21, e 21 é o valor mais próximo de 22 sem exceder.

Multiplicação
Agora, multiplique o quociente (7) pelo divisor (3).
7 × 3 = 21

Subtração
Subtraia o resultado da multiplicação (21) do dividendo original (22).
22 - 21 = 1

Resultado
O resto da divisão de 22 por 3 é 1.
Portanto, 22 % 3 = 1
Isso significa que o resultado de qualquer número % 3 será sempre 0, 1 ou 2.
  =========================================== IMPORTANTE =========================================== */

int main()
{
  int escolhaJ, escolhaC;
  srand(time(0)); // Semente de inicialização: faz com que a função rand() gere números aleatórios diferentes a cada execução do programa

  printf("===== PEDRA, PAPEL, TESOURA =====:\n");
  printf("Escolha uma opção:\n");
  printf("1 - Pedra\n");
  printf("2 - Papel\n");
  printf("3 - Tesoura\n");
  scanf("%d \n", &escolhaJ);

  // o resultado de qualquer número % 3 será sempre 0, 1 ou 2. Por isso, adicionam "+1". Para o computador, a escolha será entre 1 e 3.
  escolhaC = rand() % 3 + 1;

  switch (escolhaJ)
  {
  case 1:
    printf("Você escolheu Pedra\n");
    break;
  case 2:
    printf("Você escolheu Papel\n");
    break;
  case 3:
    printf("Você escolheu Tesoura\n");
    break;
  default:
    printf("Opção inválida\n");
    break;
  }

  switch (escolhaC)
  {
  case 1:
    printf("Computador escolheu Pedra\n");
    break;
  case 2:
    printf("Computador escolheu Papel\n");
    break;
  case 3:
    printf("Computador escolheu Tesoura\n");
    break;
  }

  printf("Resultado: ");
  if (escolhaJ == escolhaC)
  {
    printf("Empate\n");
  }
  else if (escolhaJ == 1 && escolhaC == 3 || escolhaJ == 2 && escolhaC == 1 || escolhaJ == 3 && escolhaC == 2)
  {
    printf("Você venceu\n");
  }
  else
  {
    printf("Computador venceu\n");
  }
}