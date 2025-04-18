#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n, sum = 0;

    scanf("%d", &n);

    int numbers[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i]; 
    }  
    
    printf("%d", abs(sum));

    return 0;
}