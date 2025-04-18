#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   for(int i = n;  i > 0; i--) {
        if(i % 2 == 0){
            printf("%d ", i);
        }else if(i % 2 != 0){
            printf("%d", i);
        }
   }
    
    return 0;
}