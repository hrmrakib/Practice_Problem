#include <stdio.h>

int main() {
    
    /*
    1. Take array size input
    2. take array value from user input
    3. increare 1 extra empty array size
    4. 
    */

    int n;
    scanf("%d", &n); 
    n+=1;
    int arr[n];

    int index;
    int insertValue;

    for(int i = 0; i < n; i++) {
        scanf("%d", &n);
    }

    scanf("%d %d", &index, &insertValue);

    for(int i = index; i < n; i++) {
        arr[n - 1] = arr[n - 2];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}