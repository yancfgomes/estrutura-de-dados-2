#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @struct Carro
 * @brief Estrutura de dados que representa um carro.
 * 
 * A estrutura Carro contém informações básicas sobre um carro, incluindo:
 * - placa: Uma string de 7 caracteres representando a placa do carro.
 * - modelo: Uma string de 10 caracteres representando o modelo do carro.
 * - cor: Uma string de 10 caracteres representando a cor do carro.
 */
typedef struct Carro{
    char placa[7];
    char modelo[10];
    char cor[10];
}Carro;

/**
 * @struct Pilha
 * @brief Estrutura de dados que representa uma pilha de carros.
 *
 * A estrutura Pilha é utilizada para armazenar carros em uma pilha com capacidade fixa.
 * 
 * @var Pilha::carros
 * Array de Carro que representa os carros armazenados na pilha.
 * 
 * @var Pilha::topo
 * Inteiro que indica a posição do topo da pilha. Inicialmente, deve ser -1 para indicar que a pilha está vazia.
 */
typedef struct Pilha{
    Carro carros[5];
    int topo;
}Pilha;










