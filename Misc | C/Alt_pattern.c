#include <stdio.h>

void main()
{
    int num, x, y, count = 0;
    printf("enter the number:");
    scanf("%d", &num);
    x = num << 1;
    y = x ^ num;
    y = y + 1;
    /* Checks if the number is in powers of 2 */
    while ((y / 2) != 0)
        {
            if (y % 2 != 0)
                {
                    count++;
                    break;
                }
            else
                {
                    y = y / 2;
                }
        }
    if (count)
        {
            printf("false");
        }
    else
        {
            printf("true");
        }
}
