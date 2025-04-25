#include <stdio.h>
#include <string.h>

int main()
{

    char str[1000001];

    scanf("%s", &str);

    int sum = 0;

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        sum += str[i] - 48; // str[i] -> give ASCII value so str[i] - 48 or '0' = acctual value (48 ASCII value of 0)
    }

    printf("%d", sum);

    return 0;
}