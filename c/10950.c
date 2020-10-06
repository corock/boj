#include <stdio.h>

int main()
{
    unsigned int t, a, b, i;
    scanf("%u", &t);

    unsigned int arr[t];
    for (i = 0; i < t; i++)
    {
        scanf("%u %u", &a, &b);
        printf("%u\n", a + b);
    }

    return 0;
}
