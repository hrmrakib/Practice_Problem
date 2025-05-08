#include <stdio.h>

// void swap_it(int *a, int* b) {
//     int temp = *a;
//     a = b;
//     b = temp;

//     return a, b;
// }

int main() {
    
    int a;
    scanf("%d", &a);
    // scanf("%d %d", &a, &b);

    // int sw = swap_it(a, b);
    // printf("%d", sw);

    printf("%p", a);

    return 0;
}