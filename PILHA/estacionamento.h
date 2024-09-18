//EXERCICIO
// https://dontpad.com/ADS231N02
/*

Sistema de Gerenciamento de Estacionamento com Pilha Estática
Descrição: Você foi contratado para desenvolver um sistema de gerenciamento de estacionamento utilizando uma estrutura de dados de pilha Estática em C.
O sistema deve permitir que os usuários estacionem e retirem carros, mantendo a ordem correta de chegada e saída dos veículos.
Requisitos:
1.	O sistema deve ser capaz de armazenar informações sobre os carros, incluindo placa, modelo e cor.
2.	Implemente as operações básicas de uma pilha Estática para o gerenciamento do estacionamento de cinco (05) carros:
•	inserir: Adiciona um carro à pilha (carro entra no estacionamento).
•	remover: Remove um carro da pilha (carro sai do estacionamento).
3.	Ao adicionar um carro, o sistema deve exibir uma mensagem indicando que o carro foi estacionado com sucesso, juntamente com os detalhes do carro.
4.	Ao remover um carro, o sistema deve exibir uma mensagem indicando que o carro foi retirado do estacionamento, juntamente com os detalhes do carro.
5.	Implemente uma função para exibir todos os carros atualmente estacionados, mantendo a ordem correta de chegada.

 Observações:
•	Implemente o sistema para criar e manipular a pilha.
•	Desenvolva uma interface de usuário simples em linha de comando para interagir com o sistema.
•	Teste o sistema com diferentes cenários, incluindo, estacionamento vazio, adição e remoção de carros.
*/


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










