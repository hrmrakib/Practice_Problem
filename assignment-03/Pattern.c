#include <stdio.h>

int main() {
    
    int n; 
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    int row = 1;

    for(int i = 1; i <= n; i++, row++) {
        for(int s = 1; s <= space; s++) {
            printf(" ");
        }
        for(int j = 1; j <= star; j++) {
            if(row % 2 == 0) {
                printf("-");
            }else{
                printf("#");
            }
        }
        printf("\n");
        star+=2;
        space--;
    }
    
    star = star - 4;
    space = 1;

    for(int i = 1; i <= n - 1; i++, row++) {
        for(int s = 1; s <= space; s++) {
            printf(" ");
        }
        for(int j = 1; j <= star; j++) {
            if(row % 2 == 0) {
                printf("-");
            }else{
                printf("#");
            }
        }
        printf("\n");
        star-=2;
        space++;
    }

    return 0;
}

/*

Sample Input:

4
Sample Output:

   #
  ---
 #####
-------
 #####
  ---
   #

*/