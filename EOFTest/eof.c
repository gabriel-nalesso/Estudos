#include <stdio.h>

int main() {
    int c;

    printf("--- INICIO DO TESTE ---\n");
    printf("Digite qualquer coisa e de Enter.\n");
    printf("Para 'matar' o programa, digite Ctrl + Z e de Enter.\n\n");

    // O loop roda enquanto c for DIFERENTE de EOF (-1)
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            printf("Voce apertou ENTER (Codigo 10)\n");
        } else {
            printf("Li o caractere: '%c' (Codigo ASCII: %d)\n", c, c);
        }
    }

    // Se o código chegar aqui, é porque o loop quebrou (encontrou o EOF)
    printf("\n\n--- EOF DETECTADO! O programa terminou. ---\n");
    printf("Valor final de c: %d\n", c);

    return 0;
}