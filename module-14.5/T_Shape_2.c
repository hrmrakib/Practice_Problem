#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;

    for(int i = 1; i <= n; i++) {
        for(int sp = 1; sp <= space; sp++) {
            printf(" ");
        }

        for(int j = 1; j <= star; j++) {
            printf("*");
        }
        star+=2;
        space--;
        printf("\n");
    }

    star = star-2;
    space = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int sp = 0; sp < space; sp++) {
            printf(" ");
        }

        for(int j = 1; j <= star; j++) {
            printf("*");
        }
        star-=2;
        space++;
        printf("\n");
    }

    return 0;
}