#include <stdio.h>

int main() {
    
    // char s[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char s[10] = "Hello"; // always take 1 extra size for NULL character

    printf("%s", s);
    
    return 0;
}