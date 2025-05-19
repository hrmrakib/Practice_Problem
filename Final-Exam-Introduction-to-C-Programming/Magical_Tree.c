#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int rows = 6 + (n - 1) / 2;
    int space = rows - 1;
    int star = 1;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < space; j++) {
            printf(" ");
        }
        for(int k = 0; k < star; k++) {
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }

    star = star - 2;

    int tree_space = (star - n) / 2;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < tree_space; j++) {
            printf(" ");
        }

        for(int k = 0; k < n; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
