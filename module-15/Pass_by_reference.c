#include <stdio.h>

int func(int * p) {

    *p = 500;

    // printf("%d\n", p);
}

int main() {
    int x = 10;

    func(&x);

    printf("%d\n", x);
    
    return 0;
}