#include <stdio.h>
#include <sdtlib.h>
#include <string.h>

#define MAX_STR_LEN 50

#define TAM_MAX 10

typedef struct {
    char dados[TAM_MAX][MAX_STR_LEN];
    int quantidade;
} ListaEstatica;

void inicializarListaEstatica(ListaEstatica *lista);
void inserirListaEstatica(ListaEstatica *lista, const char* texto);
void removerListaEstatica(ListaEstatica *lista, const char* texto);
void listarListaEstatica(const ListaEstatica *lista);