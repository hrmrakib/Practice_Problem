#include <stdio.h>

int main() {
    
    char str[12];
    scanf("%s", &str); // Md Rakibul Alam  -> Md\0Rakibul\0Alam

    printf("%s", str);  // Md - it takes input before NULL char

    printf("%d", str[8])
    
    return 0;
}