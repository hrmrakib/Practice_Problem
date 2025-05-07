#include <stdio.h>

int main() {
    
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);


    int *ptr; // creating a pointer variable
    ptr = &x; // set address of variable (x)

    printf("%p\n", ptr);
    printf("%p\n", &ptr); // address of pointer variable

    return 0;
}