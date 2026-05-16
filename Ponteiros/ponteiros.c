#include <stdio.h>

// Função que trás os endereços de memória
void calculo (int* a, int* b) {

    // Chama o conteúdo de a (parâmetro passado por numero1)
    printf("-Chamando o conteúdo de n1: %d\n", *a);

    // Adiciona 1 ao conteúdo de a, ou seja: é o mesmo que numero1 + 1
    (*a)++;
    printf("-Numero 1 + 1 = %d (calculo)\n", *a);

    // Adiciona 1 ao endereço de b, ou seja: é diferente de numero 2 + 1. Vai retornar um lixo de memória ou quebrar.
    *b++;
    printf("-Numero 2 + 1 = %d(calculo)\n", *b);

    // Retorna o endereço de a e b
    printf("-Chamando o endereço de a e b: %d e %d(calculo)\n", a, b);

}

// Função que trás apenas o conteúdo (Obs: mesmo se eu usasse int a e int b, seriam variáveis diferentes da função calculo)
void conteudo (int numero1, int numero2) {
    printf("-Chamando o conteúdo de numero1: %d\n", numero1);
    printf("-Chamando o conteúdo de numero2: %d\n", numero2);
    printf("-Chamando o endereço de numero1 (conteudo, não main): %d\n", &numero1);
    printf("-Chamando o endereço de numero2 (conteudo, não main): %d\n", &numero2);

    numero1 = numero1 * 30;
    numero2 = numero2 * 67;
}

int main(){


    int numero1;
    int numero2;
    int resultado;

    printf("-Digite o número 1: ");
    scanf("%d", &numero1);
    printf("\n-Digite o número 2: ");
    scanf("%d", &numero2);

    resultado = numero1 * numero2;

    // Imprime numero1 vezes numero2
    printf("\n-Resultado main (multiplicação): %d\n", resultado);

    // Chama a função calculo, com o endereço de numero1 e numero2, respectivamente. O endereço armazena os conteúdos.
    calculo(&numero1, &numero2);

    // Imprime o endereço de numero1 e numero2
    printf("-Endereço de numero1, numero2: %d e %d\n", &numero1, &numero2);

    // Chama a função conteúdo, com o CONTEÚDO (sem endereço) de numero1 e numero2
    conteudo(numero1, numero2);

    // Explicação

    printf("Quando você digita o número 1 e 2, define o valor das variáveis DENTRO DE 'MAIN'\n\n");
    printf("Em seguida, é multiplicado o numero1 pelo numero2\n\n");
    printf("Quando eu chamo a função 'calculo', eu passo o ENDEREÇO das variáveis numero 1 e 2 de 'main'\n\n");
    printf("Com isso, mesmo tendo outro nome, as variáves de 'calculo' são as MESMAS variáveis de 'main'\n\n");
    printf("Pois armazenam o mesmo ENDEREÇO DE MEMÓRIA!\n\n");
    printf("Você pode comprar o endereço de 'a' com o endereço de 'numero1' - serão iguais\n\n");
    printf("Porém, o endereço de 'b' não é igual de 'numero2' - por que?\n\n");
    printf("Por que eu não coloquei parênteses ao adicionar o ++ em b (como eu fiz no a)\n\n");
    printf("Como 'b' é ponteiro de int e int tem 4 bytes, somou 4 ao endereço de 'b'\n\n");
    printf("Por isso, 'b' tem o endereço de 'numero2' somado com 4 - verifique!\n\n");
    printf("Porém, em seguida, eu chamo a função 'conteudo' - essa função não recebe endereço.\n\n");
    printf("A função 'conteudo' recebe os VALORES (conteúdo) de numero1 e numero2\n\n");
    printf("Veja que elas imprimem os mesmos valores, porém, tem ENDEREÇOS DE MEMÓRIA diferentes\n\n");
    printf("Isso prova que 'numero1' e 'numero2' de 'main' são variáveis DIFERENTES de 'numero1' e 'numero2' de 'conteudo'\n\n");
    printf("MESMO TENDO O EXATO MESMO NOME!\n\n");
    printf("Perceba que no final de 'conteudo', eu mudo o valor de 'numero1' e 'numero2'\n\n");
    printf("Mas mesmo assim, ao chamar 'numero1' e 'numero2' dentro de 'main', o valor é o mesmo inicial\n\n");
    printf("Pois mesmo tendo o mesmo nome, é outra variável, dentro de outra função.\n\n");
    printf("E isso só não acontece em 'calculo' pois lá é enviado o ENDEREÇO DE MEMÓRIA!\n\n");

    return 0;
}

// Execução:
// Inserir números 10 e 2
// Imprimir números 20, 10, 11, 3
// Imprimir endereço de a e endereço de b
// Imprimir endereço de numero1 e endereço de numero2
// Imprimir números 10 e 2
// Imprimir endereço de memória de numero1 e numero2 (da função conteúdo, não de main)