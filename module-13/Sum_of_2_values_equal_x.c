#include <stdio.h>
#include<stdbool.h>

int main() {
 
    int n;
    scanf("%d", &n);

    int a[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int x;
    scanf("%d", &x);
 
    bool flag = true;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == x) {
                printf("%d (%d - index) + %d (%d - index) = %d", a[i], i, a[j], j, a[i] + a[j]);
                flag = false;
            }
        }
    }

    if(flag) {
        printf("Not possible!");
    }

    return 0;
}