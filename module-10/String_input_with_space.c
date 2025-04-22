#include <stdio.h>
#include <string.h>

int main() {
    
    // get(),  fgets() 

    char str[50];
    fgets(str, 21, stdin);

    printf("%s", str);
    
    return 0;
}
