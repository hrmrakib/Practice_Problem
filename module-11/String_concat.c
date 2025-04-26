#include <stdio.h>
#include <string.h>

int main() {
    
    char a[101] = "Cat";
    char b[101] = "Bat";

    int length_a = strlen(a); // Get the length of string a
    int length_b = strlen(b); // Get the length of string b

    for(int i = 0; i < length_b; i++) {
        a[length_a + i] = b[i]; 
    }
    
    printf("%s %s", a, b); // Print the modified string a and original string b
    return 0;
}