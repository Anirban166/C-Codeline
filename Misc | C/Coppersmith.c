#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int i, j, k;
    printf("Enter the dimension of the matrices: ");
    int n;
    scanf("%d", &n);
    printf("Enter the 1st matrix: ");
    double a[n][n];
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                {
                    scanf("%f", &a[i][j]);
                }
        }
    printf("Enter the 2nd matrix: ");
    double b[n][n];
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                {
                    scanf("%f", &b[i][j]);
                }
        }
    printf("Enter the result matrix: ");
    double c[n][n];
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                {
                    scanf("%f", &c[i][j]);
                }
        }
    //random generation of the r vector containing only 0/1 as its elements
    double r[n][1];
    for (i = 0; i < n; i++)
        {
            r[i][0] = rand() % 2;
            printf("%f ", r[i][0]);
        }
    //test A * (b*r) - (C*) = 0
    double br[n][1];
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < n; k++)
                        {
                            br[i][j] = br[i][j] + b[i][k] * r[k][j];
                        }
                }
        }
    double cr[n][1];
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < n; k++)
                        {
                            cr[i][j] = cr[i][j] + c[i][k] * r[k][j];
                        }
                }
        }
    double abr[n][1];
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < n; k++)
                        {
                            abr[i][j] = abr[i][j] + a[i][k] * br[k][j];
                        }
                }
        }
    //    br = multiplyVector(b, r, n);
    //    cr = multiplyVector(c, r, n);
    //    abr = multiplyVector(a, br, n);
    //abr-cr
    for (i = 0; i < n; i++)
        {
            abr[i][0] -= cr[i][0];
        }
    int flag = 1;
    for (i = 0; i < n; i++)
        {
            if (abr[i][0] == 0)
                continue;
            else
                flag = 0;
        }
    if (flag == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
