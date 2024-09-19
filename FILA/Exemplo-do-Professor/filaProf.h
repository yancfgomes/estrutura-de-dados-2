#include <stdio.h>
#include <stdbool.h>

#define TAM 4
/*
* estrutura responsável por armazenar os dados da fila
* @param dados: vetor de inteiros que armazena os elementos da fila
* @param inicio: inteiro que armazena a posição do primeiro elemento da fila
* @param fim: inteiro que armazena a posição do último elemento da fila 
*
*/
typedef struct {
    char dados[TAM];
    int inicio;
    int fim;
} Fila;

/* 
* Função responsável por inicializar a fila
* @param f: ponteiro para a fila a ser inicializada
*/
void inicializarFila(Fila *f){
    f -> inicio = 0;
    f -> fim = -1;
}

/* 
* Função responsável por verificar se a fila está vazia
* @param f: ponteiro para a fila
* @return: true se a fila estiver vazia, false caso contrário
*/
bool estaVazia(Fila *f){
    return f -> fim == -1;
}

/*
* Função responsável por verificar se a fila está cheia
* @param f: ponteiro para a fila
* @return: true se a fila estiver cheia, false caso contrário
*/
bool estaCheia(Fila *f){
    return f -> fim == TAM - 1;
}

/*
* Função responsável por enfileirar um elemento na fila
* @param f: ponteiro para a fila
* @param valor: inteiro que representa o valor a ser enfileirado
*/
void enfileirar(Fila *f, int valor){
    if(estaCheia(f)){
        printf("Fila cheia!\n");
    } else {
        f -> fim++;
        f -> dados[f -> fim] = valor;
    }
}

/*
* Função responsável por desenfileirar um elemento da fila
* @param f: ponteiro para a fila
* @return: inteiro que representa o valor desenfileirado
*/
char desenfileirar(Fila *f){
    char auxiliar;
    if (estaVazia(f)){
        printf("Fila vazia!\n");
    }else {
        auxiliar = f -> dados[f-> inicio];
        for (int i = f -> inicio; i < f -> fim; i++) // desloca os elementos da fila
            f -> dados[i] = f -> dados[i + 1];
    }
    f -> fim--;
    return auxiliar;

}

/*
* Função responsável por listar todos os elementos da fila
* @param f: ponteiro para a fila*
*/
void listarTudo(Fila *f){
    if (estaVazia(f)){
        printf("Fila vazia!\n");
    } else {
        int posicao = f -> inicio;
        do {
            printf("%c\n", f -> dados[posicao]);
            posicao++;
        } while (posicao <= f -> fim);
        printf("Fim da fila!\n");
    }
}

