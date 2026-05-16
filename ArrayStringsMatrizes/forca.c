#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavrasecreta[20];
int acertou = 0;
int enforcou = 0;

int main(){

    char chute;

    printf("Selecione a palavra secreta: ");
    scanf("%20s", palavrasecreta);

    printf("Jogo iniciado! A palavra tem %d letras.\n", strlen(palavrasecreta));

    do {
        printf("\nFaça seu primeiro chute: ");
        scanf(" %c", &chute);

        for(int i = 0; i < strlen(palavrasecreta); i++) {
            if (palavrasecreta[i] == chute) {
                printf("A posição %d tem essa letra!\n", i+1);
            }
        }

    } while (!acertou && !enforcou);
}