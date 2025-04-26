#include <stdio.h>
#include <string.h>

int main() {
    
    char a[101] = "Orangeoooo";
    char b[101] = "Apple";

    strcpy(a, b); // Copy string b to a

    printf("%s %s", a, b); // Print the modified string a
    
    return 0;
}