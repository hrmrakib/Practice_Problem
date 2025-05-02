#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];

    scanf("%s", &a);

    int len = strlen(a);

    char b[101];

    for (int i = len - 1; i >= 0; i--)
    {
        b[i] = a[i];
    }

    printf("%s", b);

    return 0;
}