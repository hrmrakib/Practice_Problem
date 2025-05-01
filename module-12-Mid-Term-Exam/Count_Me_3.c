#include <stdio.h>
#include <string.h>

int main() {
    
    int t;
    scanf("%d", &t);

    char str[10000];

    int capital = 0;
    int small = 0;
    int digit = 0;

    
    for(int i = 0; i < t; i++) {
        scanf("%s", str);
        
        int len = strlen(str);
        for(int j = 0; j < len; j++) {
            if(str[j]  >= 'a' && str[j] <= 'z') {
                small++;
            }else if(str[j]  >= 'A' && str[j] <= 'Z') {
                capital++;
            }else if((str[j]  >= '0' && str[j] <= '9')) {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
        capital = 0;
        small = 0;
        digit = 0;
    }

    
    return 0;
}