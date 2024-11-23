#include <stdio.h>

int global_var = 5; // Global variable

void function() {
    int local_var = 10; // Local variable
    printf("Inside function: global_var = %d, local_var = %d\n", global_var, local_var);
}

int main() {
    int local_var = 20; // Local variable
    printf("Inside main: global_var = %d, local_var = %d\n", global_var, local_var);
    function();
    return 0;
}
