#include <stdio.h>

int main()
{
    unsigned int a, b;
    a = b = 0;

    while (1)
    {
        scanf("%u %u", &a, &b);
        if (a == 0 && b == 0)
            break;
        printf("%u\n", a + b);
    }

    return 0;
}
