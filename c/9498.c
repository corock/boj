#include <stdio.h>

int main()
{
    unsigned int score;

    scanf("%u", &score);

    if (score) {
        
        putchar('A');
        break;
    case 8:
        putchar('B');
        break;
    case 7:
        putchar('C');
        break;
    case 6:
        putchar('D');
        break;
    default:
        putchar('F');
        break;
    }

    return 0;
}
