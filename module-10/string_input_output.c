#include <stdio.h>

int main() {
    
    char str[10];
    scanf("%s", &str); // hello

    printf("%s\n", str);

    printf("%c\n", str[5]); // NULL char ASCII value \0

    printf("%c\n", str[8]); // Garbase value
    
    return 0;
}