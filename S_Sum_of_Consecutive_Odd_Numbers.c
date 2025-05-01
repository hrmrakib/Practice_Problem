#include <stdio.h>

int main()
{

    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int temp = x;

        if (y < x)
        {
            x = y;
            y = temp;
        }

        int oddSum = 0;

        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 == 1)
            {
                oddSum += i;
            }
        }

        printf("%d\n", oddSum);
    }

    return 0;
}