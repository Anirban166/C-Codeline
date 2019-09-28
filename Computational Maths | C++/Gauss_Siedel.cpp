#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double a[10][10],x[10],y[10];
    /* ARRAY OF a[n][n] STORING COEFFICIENTS OF EQUATIONS */
    int i,j,n;
    char ch;
    clrscr();
    printf("\n  GAUSS SIEDEL METHOD TO SOLVE LINEAR EQUATIONS");
    printf("\n\n             The form of equations is as follows\n\n"
           "                 a11x1 + a12x2 + ... + a1nxn = b1\n"
           "                 a21x1 + a22x2 + ... + a2nxn = b2\n"
           "                 a31x1 + a32x2 + ... + a3nxn = b3\n"
           "                 ................................\n"
           "                 an1x1 + an2x2 + ... + annxn = bn\n");
    printf("\n\nEnter the number of variables (max 10) = ");
    /* ENTER THE NUMBER OF VARIABLES IN THE EQUATION  */
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
            x[i] = y[i] = 0;
        }
    printf("\n\nThe results are as follows....\n\n"
           "press 'enter' key to continue iterations &"
           " press 'q' to stop iterations....\n\n");
    while(ch != 'q')
        {
            for(i = 1; i <= n; i++)
                {
                    /*  LOOP TO CALCULATE VALUES OF x1,x2,...,xn etc  */
                    for(j = 1; j <= n; j++)
                        {
                            if(i == j) continue;
                            x[i] = x[i] - a[i][j]*y[j];
                        }
                    x[i] = x[i] + a[i][j];
                    x[i] = x[i]/a[i][i];
                    y[i] = x[i];     /*  TAKE VALUES FROM CURRENT ITERATIONS */
                }
            for(i = 1; i <= n; i++)
                {
                    /* LOOP TO PRINT VALUES OF x1,x2,...xn etc */
                    y[i] = x[i];
                    printf("x%d = %lf  ",i,x[i]);
                    x[i] = 0;
                }
            ch = getch();
            printf("\n\n");
        }
}
