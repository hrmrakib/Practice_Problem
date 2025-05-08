#include <stdio.h>

int* change_it(int a[], int n) {
    a[n - 1] = 100;
    return a;      
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    } 

    int* x = change_it(a, n);  

    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }

    return 0;
}
