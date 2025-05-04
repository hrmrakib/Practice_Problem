#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    for(int i = 1; i <= n; i++) {

        for(int i = 1; i <= space; i++) {
            printf(" ");        
        }

        for(int i = 1; i <= star; i++) {
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }

    space = 1;
    star = star - 4;

    for(int x = n - 2; x >= 1; x--) {
        for(int x = 1; x <= space; x++) {
            printf(" ");
        }

        for(int x = star; x >= 0; x--) {
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
        printf("%d", star);
    }






    return 0;
}