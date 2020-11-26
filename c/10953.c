#include <stdio.h>

int main()
{
    unsigned int t, a, b, i;
    scanf("%u", &t);

    while (t--)
    {
        scanf("%u, %u", &a, &b);
        printf("%u\n", a + b);
    }

    return 0;
}
