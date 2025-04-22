#include <stdio.h>

int main() {
    
    char str[10];
    scanf("%s", &str);

    printf("%s", str);

    printf("%s", str[5]); // NULL char ASCII value \0

    printf("%s", str[8]); // Garbase value
    return 0;
}