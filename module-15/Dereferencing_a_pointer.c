#include <stdio.h>

int main() {
    
    int x = 10;

    int * ptr;
    ptr = &x;

    printf("%p\n", &x);
    printf("%p\n", ptr);

    *ptr = 101;

    printf("%d\n", *ptr); // Dereferencing the value of x

    return 0;
}