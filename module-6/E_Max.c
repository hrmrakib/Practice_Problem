#include <stdio.h>

int main() {
    
    int n;
    int x;
    int max = 0;

    scanf("%d", &n); // take input size
    
    for(int i = 1; i <= n; i++) {
        scanf("%d", &x);

        if(max < x){
            max = x;
        }
    }

    printf("%d", max);

    return 0;
}