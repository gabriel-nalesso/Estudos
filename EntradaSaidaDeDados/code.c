#include <stdio.h>

// Saida de dados: printf
// Entrada de dados: scanf
// Inserir variável na saída de dados: %d (número inteiro), %f (número flutuante), %s (string), %c (caractere)
// Para usar %f: padrão %.2f (2 casas decimais) ou %.3f (3 casas decimais) ou %.4f (4casas decimais).............
// Para usar string, o char precisa ter um tamanho definido, por exemplo: char nome[50];

int main()
{
  int idade, matricula;
  float altura;
  char nome[50];

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("\nDigite sua altura: ");
  scanf("%f", &altura);

  printf("\nDigite o seu nome: ");
  scanf("%s", &nome);

  printf("\nDigite sua matrícula: ");
  scanf("%d", &matricula);

  printf("\n\n\nNome do aluno: %s, matrícula: %d .\n", nome, matricula);
  printf("Idade: %d, altura: %.2f.\n", idade, altura);
}