#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int n , m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    bool isJaduMatrix = true;

    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (i != j && i + j != n - 1) {
                count += 1;
                printf("Zero => %d\n", i != j && i + j != n - 1);
            }

            // if(i == j) { // for primary diagonal
            //     if(a[i][j] == 1) {
            //         isJaduMatrix = true;
            //         printf("YES\n");
            //     }else{
            //         isJaduMatrix = false;
            //     }
            // }

            // if(i + j == n-1) { // for secondary diagonal 
            //     if(a[i][j] == 1){
            //         printf("==> %d", a[i][j]);
            //         isJaduMatrix = true;
            //     }else{
            //         isJaduMatrix = false;
            //     }
            // }
        }
        printf("\n");
    }

    // printf("\n");
    printf("Answer: %d", isJaduMatrix);

    return 0;
}