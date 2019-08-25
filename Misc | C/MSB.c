#include<stdio.h>
#define NUM_BITS_INT 32
int int_msb_position(int n);

void main()
{
    int n, pos;
    printf("Enter a number:\n");
    scanf("%d", &n);
    pos = int_msb_position(n);
    printf("\nPosition of MSB = %d\n", NUM_BITS_INT - (pos + 1));
}

/* Function to find the MSB position */
int int_msb_position(int n)
{
    int i = 0, bit;
    while (i < NUM_BITS_INT)
        {
            bit = n & 0x80000000;
            if (bit == -0x80000000)
                {
                    bit = 1;
                }
            if (bit == 1)
                break;
            n = n << 1;
            i++;
        }
    return i;
}
