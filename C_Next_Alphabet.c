#include <stdio.h>

int main() {
    
    int c; 
    scanf("%c", &c);

    int nextChar = c + 1;

    if (c == 'z') {
        nextChar = 'a';
    } else if (c == 'Z') {
        nextChar = 'A';
    }

    printf("%c\n", nextChar);
    return 0;
}