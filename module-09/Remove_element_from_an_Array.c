#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int delIndex;

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &delIndex);

    for(int i = delIndex; i < n; i++){
        arr[i] = arr[i+1];
    }

    for(int i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}