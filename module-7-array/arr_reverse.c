#include <stdio.h>

int main() {
    
    int ar[3] = {1,2,3};

    for(int i = 2; i >= 0; --i) {
        printf("%d ", ar[i]);
    }
    return 0;
}