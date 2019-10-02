#include<stdio.h>
#include<string.h>

void mul(int first[3][3], int second[3][10], int result[3][10])
{
    int c, d, sum, k;
    int i, j;
    for ( c = 0 ; c < 3 ; c++ )
        {
            for ( d = 0 ; d < 10 ; d++ )
                {
                    sum = 0;
                    for ( k = 0 ; k < 3 ; k++ )
                        {
                            sum = sum + first[c][k] * second[k][d];
                        }
                    result[c][d] = sum;
                }
        }
}
int main()
{
    char str[29] = "this message is to be encoded";
    int len;
    int i, j;
    int result[3][10] = {0};
    int key[3][3] =
    {
        {-3, -3, -4},
        {0, 1, 1},
        {4, 3, 4}
    };
    int inv_key[3][3] =
    {
        {1, 0, 1},
        {4, 4, 3},
        {-4, -3, -3}
    };
    int encode[3][10] = {32};
    int decode[3][10] = {0};
    len = strlen(str);
    for (i = 0; i < 10; i++)
        {
            for(j = 0; j < 3; j++)
                {
                    if (str[j + i*3] >='a'  && str[j + i*3] <='z')
                        {
                            encode[j][i] = str[j + i*3] - 96;
                        }
                    if (str[j + i*3] == 32)
                        {
                            encode[j][i] = 32;
                        }
                    if (str[j + i*3] == '\0')
                        break;
                }
            if (str[j + i*3] == '\0')
                break;
        }
    mul( key, encode, result);
    printf("\nEncoded message to be sent: ");
    for (i = 0; i < 10; i++)
        {
            for ( j = 0 ; j < 3; j++)
                printf("%d, ", result[j][i]);
        }
    printf("\nDecoded message is: ");
    mul(inv_key, result, decode);
    for (i = 0; i < 10; i++)
        {
            for ( j = 0; j < 3; j++)
                {
                    if ( ((decode[j][i]+96)) >= 97 && ((decode[j][i]+96) <= 123))
                        printf("%c", (decode[j][i] + 96) );
                    else if ( decode[j][i] == 32)
                        printf(" ");
                    else
                        return;
                }
        }
    return 0;
}
