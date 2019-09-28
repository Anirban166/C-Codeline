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
    printf("\n          SECANT METHOD TO FIND ROOT OF AN EQUATION");
    printf("\n\n            f(x) = x*x*x - 5*x - 7");
    printf("\n\nEnter an interval [x0,x1] in "
           "which root is to be found");
    printf("\nx0 = ");
    scanf("%lf",&x0);	    /* INTERVAL [x0,x1] IS TO BE ENTERED HERE  */
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
            i++;
            printf("\n%d     x[%d] = %lf      x[%d] = %lf",i,i-1,x0,i,x1);
            printf("\n      f[%d] = %lf     f[%d] = %lf",i-1,f0,i,f1);
            printf("\n                                     x[%d] = %lf",i+1,x2);
            x0 = x1;
            x1 = x2;
            getch();
        }
    printf("\n\nThe value of root is = %20.15lf",x2);	  /*   ROOT    */
}
/*---------- FUNCTION PROCEDURE TO CALCULATE VALUE OF EQUATION --------*/

double fx ( double x)
{
    double f;
    f = x*x*x - 5*x - 7;          /*      FUNCTION f(x)   */
    return(f);
}
