#include "filaProf.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    Fila f;
    inicializarFila(&f);
    enfileirar(&f, 'a');
    enfileirar(&f, 'b');
    enfileirar(&f, 'c');
    enfileirar(&f, 'd');
    listarTudo(&f);
    desenfileirar(&f);
    listarTudo(&f);

    return 0;
}