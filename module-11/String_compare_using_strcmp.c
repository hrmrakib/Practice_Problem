#include <stdio.h>
#include<string.h>

int main() {
    
    char a[101] = "Apply";
    char b[101] = "Apple";

    printf("%s ", strcmp(a, b));

    int comp = strcmp(a, b); 

    if (comp == 0) {
        printf("The strings are equal\n");
    } else if (comp < 0) {
        printf("A is smaller than B\n");
    } else {
        printf("A is greater than B\n");
    }

    return 0;
}