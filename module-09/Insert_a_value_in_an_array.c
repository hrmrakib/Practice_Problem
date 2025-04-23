#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int arr[n + 1];
    int index, indexValue;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &index, &indexValue);

    for(int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = indexValue;

    for(int i = 0; i < n+1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}