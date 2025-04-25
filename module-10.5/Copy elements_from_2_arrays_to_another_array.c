#include <stdio.h>

int main() {
    
    int x;
    scanf("%d", &x);

    int a[x]; // array of a
    for(int i = 0; i < x; i++) {
        scanf("%d", &a[i]);
    }

    int y;
    scanf("%d", &y);

    int b[y]; // array of b
    for(int i = 0; i < y; i++) {
        scanf("%d", &b[i]);
    }

    int c[x + y]; // array of c

    // insert first array to the new array
    for(int i = 0; i < x; i++) {
        c[i] = a[i];
    }

    // insert second array to the new array
    int j=0;
    for(int i = y; i < x + y; i++) {
        c[i] = b[i];
        j++;
    }

    for(int i = 0; i < x + y; i++){
        printf("%d ", c[i]);
    }
    
    return 0;
}