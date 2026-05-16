#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5

void limparBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

struct Territorio {
    char nome [30];
    char cor [10];
    int tropas;
} territorio [MAX_TERRITORIOS];

int main(){

    for (int i = 0; i < MAX_TERRITORIOS; i++)
    {
        if (i == 0)
        {
        printf("=============== ===============\n");
        printf("====== BEM-VINDO AO WAR! ======\n");
        printf("=============== ===============\n");
        }
        printf("\nTERRITÓRIO %d:\n", i + 1);
        printf("- Nome: ");
        fgets(territorio[i].nome,30,stdin);
        territorio[i].nome[strcspn(territorio[i].nome, "\n")] = '\0';
        printf("- Cor: ");
        fgets(territorio[i].cor, 10, stdin);
        territorio[i].cor[strcspn(territorio[i].cor, "\n")] = '\0';
        do {
        printf("- Tropas: ");
        scanf("%d", &territorio[i].tropas);
        if (territorio[i].tropas <= 0)
        {
            printf("\nValor inválido. O  mínimo é 1. Pressione enter para continuar.\n");
        }
        } while (territorio[i].tropas <= 0);
        limparBuffer();
    }
    printf("\n\n\n- - - - - - - - - - // - - - - - - - - - -");
    printf("\n\nSUAS TROPAS SÃO:\n\n");
    for (int i = 0; i < MAX_TERRITORIOS; i++)
    {
            printf("Tropa %d - %s", i + 1, territorio[i].nome);
            printf("\nCor: %s", territorio[i].cor);
            if (territorio[i].tropas <= 1){
            printf("\n%d tropa no total", territorio[i].tropas);
            }
            else {
            printf("\n%d tropas no total", territorio[i].tropas);
            }
            printf("\n\n- - - - - - - - - - - - - - - - - - - - -\n\n");
    }
    return 0;
}