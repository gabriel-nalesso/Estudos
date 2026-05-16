#include <stdio.h>

int main()
{
  // Definição das variáveis para armazenar as propriedades das cidades
  char codigo[4], codigo2[4];
  char nome[20], nome2[20];
  char continuar, at1, at2, at1b, at2b;
  int populacao, populacao2, area, area2, pib, pib2, turismo, turismo2;
  float densidade, densidade2, PIB, PIB2;
  int ponto1 = 0, ponto2 = 0;
  int selecao;

  // Abertura do jogo com as opções
  printf("Você está no menu do Super Trunfo. por favor, selecione uma opção:\n");
  printf("1. Iniciar jogo\n2. Regras do jogo.\n3. Sair\n");
  scanf("%d", &selecao);

  switch (selecao) // Tomada de decisão com base na seleção
  {
  case 1: // Caso o jogador tenha digitado "1"
    // Cadastro da primeira cidade
    printf("Bem-vindo ao Super Trunfo! Por favor, insira o código da primeira cidade: ");
    scanf("%s", codigo);
    printf("\nAgora, por favor, digite o nome: ");
    scanf(" %s", nome);
    printf("\nDigite a população: ");
    scanf("%d", &populacao);
    printf("\nDigite a área: ");
    scanf("%d", &area);
    printf("\nDigite o PIB: ");
    scanf("%d", &pib);
    printf("\nPor fim, digite a quantidade de pontos turísticos disponíveis em sua cidade: ");
    scanf("%d", &turismo);

    // Calculando densidade e PIB per capita
    densidade = (float)populacao / area;
    PIB = (float)pib / populacao;

    // Exibindo os dados da primeira cidade
    printf("\nConfira a sua seleção:\n");
    printf("Cidade: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %d\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos turísticos: %d\n", turismo);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", PIB);

    // Cadastro da segunda cidade
    printf("\nPor favor, insira o código da segunda cidade: ");
    scanf("%s", codigo2);
    printf("\nAgora, por favor, digite o nome: ");
    scanf(" %s", nome2);
    printf("\nDigite a população: ");
    scanf("%d", &populacao2);
    printf("\nDigite a área: ");
    scanf("%d", &area2);
    printf("\nDigite o PIB: ");
    scanf("%d", &pib2);
    printf("\nPor fim, digite a quantidade de pontos turísticos disponíveis em sua cidade: ");
    scanf("%d", &turismo2);

    // Calculando densidade e PIB per capita da segunda cidade
    densidade2 = (float)populacao2 / area2;
    PIB2 = (float)pib2 / populacao2;

    // Exibindo os dados da segunda cidade
    printf("\nConfira a sua seleção:\n");
    printf("Cidade: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %d\n", area2);
    printf("PIB: %d\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", PIB2);

    // Escolha do jogador sobre quais atributos comparar

    printf("\nSelecione dois atributos para comparar:");
    printf("\nP - População\nA = Área\nB - PIB\nT - Turismo\nD = Densidade\nI - PIB per capita\n");
    printf("Selecione o primeiro: ");
    scanf(" %c", &at1);
    printf("\nSelecione o segundo: ");
    scanf(" %c", &at2);
    printf("\nVocê selecionou: [%c] e [%c]", at1, at2);

    switch (at1)
    {
    case 'P':
    case 'p':
      if (populacao == populacao2) // Se a população da cidade 1 for igual a da cidade 2
      {
        printf("\nEmpate em População!\n");
      }
      else // Se as populações forem diferentes
      {
        if (populacao > populacao2) // Caso a população da cidade 1 seja maior
        {
          printf("\nCidade %s tem maior população.\n", nome);
          ++ponto1;
        }
        else // Caso a população da cidade 2 for maior
        {
          printf("\nCidade %s tem maior população.\n", nome2);
          ++ponto2;
        }
      }
      break;
    case 'A':
    case 'a':
      if (area == area2)
      {
        printf("\nEmpate em Área!\n");
      }
      else
      {
        if (area > area2)
        {
          printf("\nCidade %s tem maior área.\n", nome);
          ++ponto1;
        }
        else
        {
          printf("\nCidade %s tem maior área.\n", nome2);
          ++ponto2;
        }
      }
      break;

    case 'B':
    case 'b':
      if (pib == pib2)
      {
        printf("\nEmpate em PIB!\n");
      }
      else
      {
        if (pib > pib2)
        {
          printf("\nCidade %s tem maior PIB.\n", nome);
          ++ponto1;
        }
        else
        {
          printf("\nCidade %s tem maior PIB.\n", nome2);
          ++ponto2;
        }
      }
      break;

    case 'T':
    case 't':
      if (turismo == turismo2)
      {
        printf("\nEmpate em Turismo!\n");
      }
      else
      {
        if (turismo > turismo2)
        {
          printf("\nCidade %s tem mais pontos turísticos.\n", nome);
          ++ponto1;
        }
        else
        {
          printf("\nCidade %s tem mais pontos turísticos.\n", nome2);
          ++ponto2;
        }
      }
      break;

    case 'D':
    case 'd':
      if (densidade == densidade2)
      {
        printf("\nEmpate em Densidade!\n");
      }
      else
      {
        if (densidade < densidade2)
        {
          printf("\nCidade %s tem menor densidade.\n", nome);
          ++ponto1;
        }
        else
        {
          printf("\nCidade %s tem menor densidade.\n", nome2);
          ++ponto2;
        }
      }
      break;

    case 'I':
    case 'i':
      if (PIB == PIB2)
      {
        printf("\nEmpate em PIB per capita!\n");
      }
      else
      {
        if (PIB > PIB2)
        {
          printf("\nCidade %s tem maior PIB per capita.\n", nome);
          ++ponto1;
        }
        else
        {
          printf("\nCidade %s tem maior PIB per capita.\n", nome2);
          ++ponto2;
        }
      }
      break;
    }
    break;
  default:
    printf("Inválido");
    break;

    printf("\n =PONTOS= Cidade 1: %d - Cidade 2: %d.\n", ponto1, ponto2);

    if (ponto1 == ponto2)
    {
      printf("Houve um empate técnico. Ambos pontuaram: %d\n", ponto1);
    }
    else
    {
      printf("\nE o grande vencedor é:\n");
      if (ponto1 > ponto2)
      {
        printf("%s com %d pontos! Parabéns!\n", nome, ponto1);
        printf("%s perdeu com apenas %d pontos.\n", nome2, ponto2);
      }
      else if (ponto2 > ponto1)
      {
        printf("%s com %d pontos! Parabéns!\n", nome2, ponto2);
        printf("%s perdeu com apenas %d pontos.\n", nome, ponto1);
      }
    }
    break;
  case 2: // Caso o jogador digite a opção "2", exibe as regras
    printf("\n=== REGRAS - SUPER TRUNFO ===\n");
    printf("\n1. Seu objetivo é pontuar mais.\n");
    printf("\n2. Pontua quem: 2.1 - tiver maior população\n2.2 - Obtiver menor densidade populacional\n2.3 - Obtiver maior área\n2.4 - Obtiver maior PIB\n2.5 - Obtiver maior PIB per capita\n2.6 - Obtiver maior quantidade de pontos turísticos.");
    break; // Finaliza a opção 2
  case 3:  // Caso o jogador utilize a opção 3, o programa se encerra
    printf("Você escolheu sair.");
    break; // Finaliza a opção 3
  default: // Caso o jogador não utilize umas das 3 opções pré definidas
    printf("Opção inválida.");
  } // Fim do switch
} // Fim da função main