typedef struct Carro{
    char placa[7];
    char modelo[10];
    char cor[10];
}Carro;

typedef struct Pilha{
    Carro carros[5];
    int topo;
}Pilha;
