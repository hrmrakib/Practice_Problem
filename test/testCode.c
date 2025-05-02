#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];

    scanf("%s", &a);

    int len = strlen(a);

    if (a[0] == a[len - 1])
    {
        printf("Yes %d\n", a[len - 1]);
    }
    else
    {
        printf("No");
    }

    return 0;
}