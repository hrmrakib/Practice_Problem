#include <stdio.h>

int main() {
    
    char c;
    scanf("%c", &c);

    int next_alpha = c + 1;
    
    if(c == 'z') {
        next_alpha = c - 25;
        printf("%c" , next_alpha);
    }else{
        printf("%c" , next_alpha);
    }

    return 0;
}