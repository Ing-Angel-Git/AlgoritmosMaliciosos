#include <stdio.h>
#include <stdlib.h>

int global_var = 5; // Global variable

int main() {
    int local_var = 10; // Local variable
    int *heap_var;
    heap_var = (int *)malloc(sizeof(int));
    *heap_var = 20; // Heap variable

    printf("global_var: %p\n", &global_var);
    printf("local_var: %p\n", &local_var);
    printf("heap_var: %p\n", heap_var);

    free(heap_var);
    return 0;
}
