#include <stdio.h>

int func(int a[]) {
    printf("func function: %d\n", a);
}

int main() {
    
    int a[5] = {10, 20, 30, 40, 50};

    func(a);
    
    printf("main function: %d\n", a);

    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}