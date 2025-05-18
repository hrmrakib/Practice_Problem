#include <stdio.h>
#include <math.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    
    for (int x = 0; x < tc; x++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int b[n];
        int c[n];

        // copy a arr & set to the b arr
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        // ascending order of b arr
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] < b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            int cal = a[i] - b[i];
            c[i] = cal;
        }

        for(int i = 0; i < n; i++){
            printf("%d ", abs(c[i]));
        }
        printf("\n");
    }
    return 0;
}
