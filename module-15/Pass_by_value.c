#include <stdio.h>

int func(int x) {
    x = 20;

    printf("address of func function: %p\n", &x);
}

int main() {
    
    int x = 10;
    
    func(x);

    printf("address of main function: %p\n", &x);

    return 0;
}