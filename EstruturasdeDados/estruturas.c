#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float media;
} Aluno;

int main(){
    Aluno aluno1 = {"João", 20, 8.5};
    printf("Aluno: %s\n", aluno1.nome);
    printf("Ideade: %d\n", aluno1.idade);
    printf("Média: %.2f\n", aluno1.media);
}