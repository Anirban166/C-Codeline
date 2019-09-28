#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double fx ( double x);      /* DECLARATION OF  FUNCTION  */
    double x0,x1,x2,f0,f1,f2,err;
    int n,i;
    clrscr();
    printf("\n       REGULA FALSI METHOD TO FIND ROOT OF AN EQUATION");
    printf("\n\n            f(x) = exp(x) - 4*x");
    printf("\n\nEnter an interval [x0,x1] in "
           "which root is to be found");
    printf("\nx0 = ");
    scanf("%lf",&x0);     /* INTERVAL [x0,x1] IS TO BE ENTERED HERE  */
    printf("x1 = ");
    scanf("%lf",&x1);
    printf("\nEnter the number of iterations = ");
    scanf("%d",&n);
    printf("\npress any key for display of iterations...\n");
    getch();
    i = 0;
    while(n-- > 0)
        {
            f0 = fx(x0);           /*     CALCULATE f(x) AT x = x0        */
            f1 = fx(x1);           /*     CALCULATE f(x) AT x = x1        */
            x2 = x1  - ((x1 - x0)/(f1 - f0)) * f1;
            /*     CALCULATION OF NEXT APPROXIMATION     */
            f2 = fx(x2);
            i++;
            printf("\n\n%d\tx[%d] = %lf\t\tx[%d] = %lf\tx[%d] = %lf\n"
                   "\tf[%d] = %lf\tf[%d] = %lf\t f[%d] = %lf\n"
                   ,i,i,x1,i-1,x0,i+1,x2,i,f1,i-1,f0,i+1,f2);
            if((f0 * f2) < 0) x1 = x2;
            if((f1 * f2) < 0)
                {
                    x0 = x1;
                    x1 = x2;
                }
            printf("\nNew interval : x[%d] = %lf\t x[%d] = %lf"
                   ,i-1,x0,i+1,x1);
            getch();
        }
    printf("\n\nThe value of root is = %20.15lf",x2);	  /*   ROOT    */
}
/*---------- FUNCTION PROCEDURE TO CALCULATE VALUE OF EQUATION --------*/

double fx ( double x)
{
    double f;
    f = exp(x) - 4*x;          /*      FUNCTION f(x)   */
    return(f);
}
