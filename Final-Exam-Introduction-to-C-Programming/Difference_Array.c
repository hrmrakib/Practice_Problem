#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int b[n]; 

    for(int i = 0; i < n; i++) {
        b[i] = a[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(b[i] < b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d", b[i]);
    }
    
    return 0;
}
