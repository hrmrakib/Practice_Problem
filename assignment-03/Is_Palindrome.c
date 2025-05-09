#include <stdio.h>
#include <string.h>

int is_palindrome(char s[], int len)
{
    char x[1001];

    for (int i = len; i > 0; i--)
    {
        x[len - i] = s[i - 1];
    }

    if (strcmp(s, x) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    char s[1001];

    scanf("%s", s);

    int len = strlen(s);

    int result = is_palindrome(s, len);

    if(result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}