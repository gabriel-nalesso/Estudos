#include <stdio.h>
#include <stdlib.h>

// 1. O Molde do Boneco
struct No {
    int dado;
    struct No *proximo;
};

// 2. A Máquina de inserir
void inserirNoInicio(struct No **inicio, int valor) {
    struct No *novo = (struct No*) malloc(sizeof(struct No));

    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }

    novo->dado = valor;
    novo->proximo = *inicio;
    *inicio = novo;
}

// 3. A máquina de remover
void removerDoInicio(struct No** inicio){
    //1. Primeiro checamos se não está vazia
    //Se ponteiro apontar para NULL, está vazia
    if (inicio == NULL || *inicio == NULL) {
        printf("A lista já está vazia. Nada a remover.");
        return;
    }

    //2. Guardamos o endereço do nó que vamos remover
    struct No* noParaRemover = *inicio;

    //3. O início da listapassa a ser o segundo nó
    //O ponteito "inicio" passa a apontar para o nó seguinte ao removido

    *inicio = (*inicio)->proximo;

    //4. Liberamos a memória do nó que foi removido
    free(noParaRemover);
}

// 4. A Máquina de mostrar
void imprimirLista(struct No *inicio) {
    struct No *atual = inicio; // Começamos pelo primeiro boneco

    printf("FILA ATUAL: ");
    while (atual != NULL) { // Enquanto o boneco estiver segurando a mão de alguém...
        printf("[%d] -> ", atual->dado); // Mostra o número no bolso dele
        atual = atual->proximo; // Pula para o próximo boneco da fila
    }
    printf("NULL (Fim da linha)\n");
}

// 5. Navegar pela lista
void listar(struct No* inicio){
    //1. Criamos um "ponteiro viajante" que começa do início
    struct No* atual = inicio;

    // Se a lista estiver vazia, informamos
    if(atual == NULL){
        printf("A lista está vazia\n");
        return;
    }

    //2. Enquanto não chegar ao fim
    while (atual != NULL){

        //3. Mostramos o dado do nó onde ele está
        printf("%d\n", atual->dado);

        //4. E fazemos ele ir para o próximo
        atual = atual->proximo;
    }
}

int main() {
    // Criamos o papel mestre. No começo, não tem nenhum boneco (NULL).
    struct No *minhaLista = NULL;

    inserirNoInicio(&minhaLista, 10);
    inserirNoInicio(&minhaLista, 20);
    inserirNoInicio(&minhaLista, 30);
    printf("Antes de remover: ");
    imprimirLista(minhaLista);
    removerDoInicio(&minhaLista);
    printf("\nDepois de remover: ");
    imprimirLista(minhaLista);
    return 0;
}