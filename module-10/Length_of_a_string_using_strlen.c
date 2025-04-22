#include <stdio.h>

int main() {
    
    char str[101];

    scanf("%s", &str);

    int size = strlen(str);

    printf("%d", size);
    
    return 0;
}