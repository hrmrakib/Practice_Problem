#include <stdio.h>
#include <string.h>

int main() {
    
    // gets(var_name)
    // fgets(var_name, size, stdin) ---> standard (recommanded) : Enter take as a input

    char str[50];

    fgets(str, 21, stdin);

    printf("%s", str);
    
    return 0;
}
