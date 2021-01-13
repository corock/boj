#include <stdio.h>

int main()
{
    int leap_year;
    scanf("%d", &leap_year);
    ((leap_year % 4 == 0 && leap_year % 100 != 0) || leap_year % 400 == 0) ? printf("%d", 1) : printf("%d", 0);
    return 0;
}
