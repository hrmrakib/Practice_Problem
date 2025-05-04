#include <stdio.h>

int main() {
     
    int n;
    scanf("%d", &n);

    int end = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= end; j++) {
            printf("#");
        }
        
        end++;
        printf("\n");
    }
    
    return 0;
}