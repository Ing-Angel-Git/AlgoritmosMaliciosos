#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa la semilla

    for (int i = 0; i < 5; i++) {
        int num = rand();
        printf("Número aleatorio %d: %d\n", i + 1, num);
    }

    return 0;
}
