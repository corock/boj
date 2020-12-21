#include <stdio.h>

int main()
{
    unsigned int t, a, b, i;
    scanf("%u", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%u %u", &a, &b);
        printf("Case #%u: %u\n", i + 1, a + b);
    }

    return 0;
}
