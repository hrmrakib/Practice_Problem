#include <stdio.h>

int main() {
    
    int x;
    scanf("%c", &x);

    if(x >= 'a' && x <= 'z') {
        x = x - 32;
        printf("%c", x);
    }else{
        x = x + 32;
        printf("%c", x);
    }
    return 0;
}