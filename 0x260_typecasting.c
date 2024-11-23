#include <stdio.h>

int main() {
    int a = 5;
    float b = 13.5;
    int c;

    c = (int)b; // Typecast float to int
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %d\n", c);

    return 0;
}
