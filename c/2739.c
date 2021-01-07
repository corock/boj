#include <stdio.h>

int main()
{
    int foo;
    int i;

    scanf("%d", &foo);

    for (i = 1; i <= 9; i++) {
      printf("%d * %d = %d\n", foo, i, foo * i);
    }

    return 0;
}
