#include <stdio.h>
#include<string.h>

int main() {
    
    char a[101] = "Orangeoooo";
    char b[101] = "Apple";

    int length = strlen(b);

    for(int i = 0; i <= length; i++){
        a[i] = b[i];
    }

    // for(int i = 0; i < length; i++) {
    //     printf("%c", a[i]);
    // }

    printf("%s", a);
    return 0;
}