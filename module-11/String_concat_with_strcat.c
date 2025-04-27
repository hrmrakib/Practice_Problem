#include <stdio.h>
#include <string.h>

int main() {
    
    char a[101] = "Orange+";
    char b[101] = "Apple";

    strcat(a, b); // Concatenate string b to a

    printf("%s %s", a, b); // Print the modified string a and original string b
    
    return 0;
}