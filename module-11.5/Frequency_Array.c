#include <stdio.h>

int main() {
    
    int a[10] = {9, 1, 2, 3, 4, 5, 6, 7, 8, 1};
    
    int freq[10] = {0};

    for(int i = 0; i < 10; i++) {
        int val = a[i];
        freq[val]++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d -> %d \n", i, freq[i]);
    }
     
    return 0;
}