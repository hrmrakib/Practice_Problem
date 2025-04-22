#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int low = arr[0];
    int position = 0;

    for(int i = 0; i < n; i++) {
        if(low > arr[i]) {
            low = arr[i];
            position = i;
        }
    }

    printf("%d %d", low, position + 1);
    return 0;
}