#include <stdio.h>

void summation(int a[], int n, int i) {
    int sum = 0;

    if(i == n) {
        return;
    }

    // int add = ;
    summation(sum + a[i], n, i + 1);

    printf("%d", sum);
}

int main() {
    
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    summation(a, n, 0);
    
    return 0;
}