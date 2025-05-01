#include <stdio.h>

int main() {
    
    int t;
    scanf("%d", &t);

    int m1 = 0, m2 = 0, d = 0;

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &m1, &m2, &d);

        int all_farmers = m1 + m2;
        int days = (m1 * d) / all_farmers;
        int how_days = d - days;

        printf("%d\n", how_days);
    }

    return 0;
}