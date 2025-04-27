#include <stdio.h>
#include <stdbool.h>

int main() {
    
    char a[101] = "Orange+";
    char b[101] = "Apple";

    int i = 0;
    while (true)
    {
        if (a[i] == b[i]) {
            printf("The strings are equal\n");
            break;
        } else if(a[i] == '\0') {
            printf("A is smalller than B\n");
            break;
        }else if(b[0] == '\0') {
            printf("A is greater than B\n");
            break;
        } else if (a[i] < b[i]) {
            printf("A is smaller than B\n");
            break;
        } else {
            printf("A is greater than B\n");
            break;
        }
        i++;
        
    }
    
    return 0;
}