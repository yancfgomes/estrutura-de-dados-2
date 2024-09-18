#include "Pilha.h"

int main(){
    Pilha p1, p2; //variavel pilha
    inicializar(&p1);
    inicializar(&p2);
    empilhar(&p1, 5);
    empilhar(&p1, 8);
    empilhar(&p2, 3);
    empilhar(&p1, 6);
    exibirTudo(&p1);
    exibirTudo(&p2);
}