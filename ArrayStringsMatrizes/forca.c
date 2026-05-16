#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavrasecreta[20];
int ganhou = 0;
int enforcou = 0;
int erros = 0;
int acertos = 0;
int verificacao = 0;

int main(){
    int tentativa = 0;
    char chute;

    printf("Selecione a palavra secreta: ");
    scanf("%20s", palavrasecreta);

    printf("Jogo iniciado! A palavra tem %d letras.\n", strlen(palavrasecreta));

    do {
        tentativa++;
        printf("\nFaça sua %d° tentativa: ", tentativa);
        scanf(" %c", &chute);

        for(int i = 0; i < strlen(palavrasecreta); i++) {
            
            if (palavrasecreta[i] == chute) {
                printf("A posição %d tem essa letra!\n", i+1);
                acertos++;
                verificacao = 1;
            }
        }

        if (!verificacao){
            printf("A palavra não possui essa letra!\n");
            erros++;
        }
        
        if (erros == 7){
            enforcou++;
            printf("Você perdeu.\n");
        }

        if (acertos == strlen(palavrasecreta)){
            ganhou++;
            printf("Você venceu.\n");
        }

    } while (!ganhou && !enforcou);

    return 0;
}