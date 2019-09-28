#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double a[10][10],x[10],ratio,coefsum;
    /* ARRAY OF a[n][n] STORING COEFFICIENTS OF EQUATIONS */
    int i,j,n,k;
    clrscr();
    printf("\n         Computational Techniques - J. S. CHITODE");
    printf("\n     GAUSS ELIMINATION METHOD TO SOLVE LINEAR EQUATIONS");
    printf("\n\n             The form of equations is as follows\n\n"
           "                 a11x1 + a12x2 + ... + a1nxn = b1\n"
           "                 a21x1 + a22x2 + ... + a2nxn = b2\n"
           "                 a31x1 + a32x2 + ... + a3nxn = b3\n"
           "                 ................................\n"
           "                 an1x1 + an2x2 + ... + annxn = bn\n"
           "\n\nHere a11,a22,a33,a44,.....etc.  should not be zero\n");
    printf("\n\nEnter the number of variables (max 10) = ");
    /* ENTER THE NUMBER OF VARIABLES IN THE EQUATION   */
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
        {
            /*  LOOP TO GET COEFFICIENTS a11,a12...,ann & so on  */
            for(j = 1; j <= n; j++)
                {
                    printf("a%d%d = ",i,j);
                    scanf("%lf",&a[i][j]);
                }
            printf("b%d = ",i);
            scanf("%lf",&a[i][j]);
            x[i] = 0;
        }
    for(k = 1; k <= n-1; k++)
        {
            /*  LOOP TO GENERATE UPPER TRIANGULAR SYSTEM  */
            for(i = k+1; i <= n; i++)
                {
                    ratio = a[i][k]/a[k][k];
                    for(j = k+1; j <= n+1; j++)
                        {
                            a[i][j] = a[i][j] - ratio * a[k][j];
                        }
                }
            for(i = k+1; i <= n; i++)  a[i][k] = 0;
        }
    x[n] = a[n][n+1]/a[n][n];
    for(i = n-1; i >= 1; i--)
        {
            /* LOOP FOR BACKWARD SUBSTITUTION  */
            coefsum = 0;
            for(j = i+1; j <= n; j++)   coefsum = coefsum + a[i][j] * x[j];
            x[i] = (a[i][n+1] - coefsum)/a[i][i];
        }
    printf("\n\nThe values of variables in the given equations are "
           "as follows....\n");
    for(i = 1; i <= n; i++)	 printf("\n   x%d = %lf  ",i,x[i]);
    /* LOOP TO PRINT VALUES OF x1,x2,...xn etc  */
}
