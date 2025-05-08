#include <stdio.h>

void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" ");  
        }
        printf("%d", i);
    }
    printf("\n"); 
}

int main() {
    int n;
    
    scanf("%d", &n);

    printNumbers(n);

    return 0;
}
