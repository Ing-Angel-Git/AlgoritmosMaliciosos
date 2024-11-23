#include <stdio.h>
#include <stdlib.h>

int global_var = 10; // Variable global (segmento de datos)

int main() {
    static int static_var = 20; // Variable estática (segmento de datos)
    int local_var = 30;         // Variable local (segmento de stack)
    int *heap_var;              // Puntero para variable en el heap

    heap_var = (int *)malloc(sizeof(int)); // Asignación en el heap
    *heap_var = 40;

    printf("Variable global: %d\n", global_var);
    printf("Variable estática: %d\n", static_var);
    printf("Variable local: %d\n", local_var);
    printf("Variable en el heap: %d\n", *heap_var);

    free(heap_var); // Liberar memoria asignada en el heap
    return 0;
}
