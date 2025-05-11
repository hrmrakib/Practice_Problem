#include <stdio.h>

void recursion(int n, int i) {
    printf("%d\n", i);

    if(i == n) {
        return;
    }

    recursion(n, i+1);
}

int main() {
    
    int n;
    scanf("%d", &n);

    recursion(n, 1);
    
    return 0;
}