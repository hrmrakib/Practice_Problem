#include <stdio.h>

void rec(int n) {
    if(n == 0) {
        return;
    }

    rec(n / 10);
    
    int last  = n % 10;
    printf("%d ", last);
}

int main() {
    
    int tc;
    scanf("%d", &tc);

    int n;
    for(int i = 0; i < tc; i++) {
        scanf("%d", &n);
        if(n == 0) {
            printf("0");
        }
        
        rec(n);
        printf("\n");
    }


    return 0;
}