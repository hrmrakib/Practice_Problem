#include <stdio.h>

int main() {
    
    int a[5] = {10, 20, 30, 40, 50};

    printf("Array ar nam ar pointer: %p\n", a); // always store 1st value of pointer

    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);
    printf("%p\n", &a[3]);
    printf("%p\n", &a[4]);

    *a = 200; // update 1st index
    *(a+1) = 300; // update 2nd index value

    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}