#include <stdio.h>
#include "../Lib/meu_utilitario.h"
#include <windows.h>

#define MAX_LIVROS 50
#define TAM_STRING 100

// Estrutura para definir as informações do livro
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
} biblioteca[MAX_LIVROS]; // Cria a variável "biblioteca", que acessa as variáveis das informações do livro

int main(){ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleOutputCP(65001);
    int totalLivros = 0; // Inicialmente acessa o índice 0
    int opcao;

    do {
        printf("======================================\n");
        printf("        BIBLIOTECA - PARTE 1\n");
        printf("======================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Sair\n");
        printf("- - - - - - - - - - - - - - - - - - - - -\n");
        printf("Eolha uma opção: ");

        opcao = lerInteiro(); //Solicita a entrada para a variável "opcao", que é usada para escolher a opção do menu

        switch (opcao) {
            case 1:
            printf("--- Cadastro de Novo Livro ---\n");

                if (totalLivros < MAX_LIVROS) {
                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin); //Solicita a entrada para a variável "nome" do livro do primeiro índice (livro 1, índice 0). O tamanho não pode ultrapassar 99 caracteres + enter
                    removerQuebraLinha(biblioteca[totalLivros].nome); //Remove o \n que o fgets traz para dentro da variável

                    printf("Digite o autor do livro: ");
                    fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin); //Mesma coisa do nome, porém com o autor
                    removerQuebraLinha(biblioteca[totalLivros].autor); //Remove o \n que o fgets traz para dentro da variável

                    printf("Digite a editora do livro: ");
                    fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin); //Mesma coisa, porém com a editora
                    removerQuebraLinha(biblioteca[totalLivros].editora); //Remove o \n que o fgets traz para dentro da variável

                    printf("Digite a edição do livro: ");
                    biblioteca[totalLivros].edicao = lerInteiro(); //Solicita a entrada para a variável "edicao" do livro do primeiro índice (livro 1, índice 0)

                    totalLivros++;
                    printf("Livro cadastrado com sucesso!\n");
                } else {
                    printf("Capacidade máxima de livros atingida.\n");
                }

                printf("\nPressione Enter para continuar...");
                getchar();
                break;

            case 2:
            printf("--- Lista de Livros ---\n");

                if (totalLivros == 0) {
                    printf("Nenhum livro cadastrado.\n");
                } else {
                    for (int i = 0; i < totalLivros; i++) {
                        printf("- - - - - - - - - - - - - - -\n", i + 1);
                        printf("LIVRO %d\n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edição: %d\n", biblioteca[i].edicao);
    }
    printf("- - - - - - - - - - - - - - -\n");
}
                printf("\nPressione Enter para continuar...");
                getchar();
                break;

            case 3:
                printf("Saindo do programa. Até mais!\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                printf("\nPressione Enter para continuar...");
                getchar();
        }
    } while (opcao != 3);

    return 0;
}