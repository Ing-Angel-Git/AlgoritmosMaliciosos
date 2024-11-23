#include <stdio.h>

int main() {
    int int_var = 5;
    int *int_ptr;

    int_ptr = &int_var; // Assign address of int_var to int_ptr

    printf("int_ptr = 0x%08x\n", int_ptr);
    printf("*int_ptr = %d\n", *int_ptr);
    printf("&int_var = 0x%08x\n", &int_var);
    printf("int_var = %d\n", int_var);

    return 0;
}
