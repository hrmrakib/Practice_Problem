#include <stdio.h>
#include <string.h>

is_palindrome()
{
}

int main()
{

    char s[1001];
    scanf("%s", &s);

    char x[1001];

    int len = strlen(s);

    for (int i = len; i > 0; i--)
    {
        x[len - i] = s[i - 1];
    }

    // int len = strlen(s);
    // for (int i = len; i > 0; i++)
    // {
        
    // }

    printf("%s", x);

    return 0;
}