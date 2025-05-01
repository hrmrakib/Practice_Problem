#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int tc;
    
    for(int i = 1; i <= n; i++) {
        scanf("%d", &tc);
        
        long long int fv = 1;

        for(int i = 1; i <= tc; i++) {
            fv = fv * i;
        }

        printf("%lld\n", fv);
    }
    
    return 0;
}