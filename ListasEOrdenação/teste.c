#include <stdio.h>
#include <stdlib.h>

typedef struct trem{
    int vagao;
    struct trem *proximo;
}Trem;

void insInicio(Trem **inicio, int valor){
    Trem *novo = (Trem*)malloc(sizeof(Trem));
if (novo == NULL){
    printf("Erro ao alocar memória.\n");
    return;
}

novo->vagao = valor;
novo->proximo = *inicio;
*inicio = novo;

}

void impLista(Trem *inicio){
    Trem *atual = inicio;
    printf("Fila: ");
    while (atual != NULL){
        printf("%d -> ", atual->vagao);
        atual = atual->proximo;
    }
    printf("Fim da linha\n");
}

int main (){
    Trem *minhaLista = NULL;

    printf("Inserindo o primeio vagão...");
    insInicio(&minhaLista, 1);
    printf("Inserindo o segundo vagão (o primeiro fica para trás)...");
    insInicio(&minhaLista, 2);
    printf("Inserindo o terceiro vagão (o segundo fica para trás)...");
    insInicio(&minhaLista, 3);
    printf("Inserindo o quarto vagão (o terceiro fica para trás)...");
    insInicio(&minhaLista, 4);

    printf("\nResultado final:\n");
    impLista(minhaLista);
}