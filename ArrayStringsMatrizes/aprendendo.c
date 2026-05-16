#include <stdio.h>

int main()
{
  /*
  ===== VETORES =====

    int numero[4] = {1, 2, 3, 4};

    for (int i = 0; i < 5; i++)
    {
      printf("%d\n", numero[i]);
    }
char *nomes[] = {"Gabriel", "Gaask", "Lingui"};

for (int i = 0; i < 3; i++)
{
  printf("%s\n", nomes[i]);
}

int numeros[5];
numeros[0] = 10;
numeros[1] = 20;
numeros[2] = 30;
numeros[3] = 40;
numeros[4] = 50;
numeros[5] = 60;

printf("%d\n", numeros[4]);
printf("%d\n", numeros[2]);
*/
  /*
    int matriz[3][3] = {                                        // 3 linhas, 3 colunas
                                                                //         COLUNA      0  1  2      LINHA
                        {1, 2, 3},                              //  0
                        {4, 5, 6},                              //  1
                        {7, 8, 9}};                             //  2
    printf("O número na posição [2][0] é: %d\n", matriz[1][2]); // linha 1 (4,5,6) e coluna 2 (3,6,9) = 6
    printf("O número na posição [1][1] é: %d\n", matriz[0][1]); // linha 0 (1,2,3) e coluna 1 (2,5,8) = 2
    */

  int index;

  char *nomesalunos[3][3] = {
      {"Aluno 0", "Pt: 30", "Mat: 90"},
      {"Aluno 1", "Pt: 60", "Mat: 60"},
      {"Aluno 2", "Pt: 90", "Mat: 30"}};

  printf("Digite o número do aluno que queira ver as notas\n");
  printf("Para o aluno 0, digite 0\n");
  printf("Para o aluno 1, digite 1\n");
  printf("Para o aluno 2, digite 2\n");
  scanf("%d", &index);
  printf("As notas do aluno %d foram: %s, %s\n", index, nomesalunos[index][1], nomesalunos[index][2]);
}

// printf %d, matriz[linha], matriz[coluna] = todas as linhas e colunas
// printf %d, linha, coluna = t