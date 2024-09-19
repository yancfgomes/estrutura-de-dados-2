// nota: Este código foi escrito por IA


#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Define o tamanho máximo da fila

typedef struct {
    int itens[MAX];
    int frente;
    int tras;
} Fila;

/**
 * Inicializa a fila.
 * 
 * @param f Ponteiro para a fila a ser inicializada.
 */
void inicializaFila(Fila *f) {
    f->frente = 0;
    f->tras = -1;
}

/**
 * Verifica se a fila está cheia.
 * 
 * @param f Ponteiro para a fila.
 * @return 1 se a fila estiver cheia, 0 caso contrário.
 */
int filaCheia(Fila *f) {
    return f->tras == MAX - 1;
}

/**
 * Verifica se a fila está vazia.
 * 
 * @param f Ponteiro para a fila.
 * @return 1 se a fila estiver vazia, 0 caso contrário.
 */
int filaVazia(Fila *f) {
    return f->frente > f->tras;
}

/**
 * Insere um elemento na fila.
 * 
 * @param f Ponteiro para a fila.
 * @param item Elemento a ser inserido na fila.
 * @return 1 se a inserção for bem-sucedida, 0 se a fila estiver cheia.
 */
int enfileira(Fila *f, int item) {
    if (filaCheia(f)) {
        printf("Fila cheia!\n");
        return 0;
    }
    f->itens[++f->tras] = item;
    return 1;
}

/**
 * Remove um elemento da fila.
 * 
 * @param f Ponteiro para a fila.
 * @param item Ponteiro para armazenar o elemento removido.
 * @return 1 se a remoção for bem-sucedida, 0 se a fila estiver vazia.
 */
int desenfileira(Fila *f, int *item) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return 0;
    }
    *item = f->itens[f->frente++];
    return 1;
}

/**
 * Exibe os elementos da fila.
 * 
 * @param f Ponteiro para a fila.
 */
void exibeFila(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return;
    }
    printf("Fila: ");
    for (int i = f->frente; i <= f->tras; i++) {
        printf("%d ", f->itens[i]);
    }
    printf("\n");
}

int main() {
    Fila fila;
    inicializaFila(&fila);

    enfileira(&fila, 10);
    enfileira(&fila, 20);
    enfileira(&fila, 30);

    exibeFila(&fila);

    int item;
    desenfileira(&fila, &item);
    printf("Item removido: %d\n", item);

    exibeFila(&fila);

    return 0;
}