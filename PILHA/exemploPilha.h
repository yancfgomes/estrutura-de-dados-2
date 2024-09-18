#include <stdio.h>
#define TAMANHO_PILHA 4
struct Pilha{
	int dados[TAMANHO_PILHA];//vetor
	int topo;//controle do topo da pilha
};

Pilha p; //variavel pilha

/*
* funcao para inicialização da pilha
*/
void inicializar(Pilha *p){
	p->topo = -1;
}

bool estaVazio(Pilha *p){
	if(p->topo == -1){
		return true;//informa que a pilha esta vazia
	}else{
		return false;//informa que a pilha não esta vazia
	}
}

/*
*função que verificar se a pilha esta cheia
*return true se a pilha estiver cheia
*return false se a pilha não estiver cheia
*/
bool estaCheio(Pilha *p){
	return p->topo == (TAMANHO_PILHA - 1);
}

void empilhar(Pilha *p, int valor){
	if(estaCheio(p)){
		printf("Pilha esta cheia!");
	}else{
		p->topo++;
		p->dados[p->topo] = valor;
	}
}

int desempilhar(Pilha *p){
	int aux;
	if(estaVazio(p)){
		printf("A pilha esta vazia");
	}else{
		aux = p->dados[p->topo];
		p->topo--;	
	}
	return aux;
}

void exibirTudo(Pilha *p){
	if(estaVazio(p)){
		printf("Pilha esta vazia!");
	}else{
		int auxTopo = p->topo;
		do{
			printf("[%d] = %d\n",auxTopo, p->dados[auxTopo]);
			auxTopo--;
		}while(auxTopo >= 0);
		printf("Fim da pilha!\n");
	}
}