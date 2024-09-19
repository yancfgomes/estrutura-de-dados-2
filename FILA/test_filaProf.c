#include "filaProf.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    Fila normal, prioridade;
    inicializarFila(&normal);
    enfileirar(&normal, "a");
    enfileirar(&normal, "b");
    enfileirar(&normal, "c");
    enfileirar(&normal, "d");
    enfileirar(&normal, "e");
    listarTudo(&normal);

    return 0;
}