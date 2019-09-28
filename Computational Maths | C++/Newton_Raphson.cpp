#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double fx ( double x);      /* DECLARATION OF  FUNCTION  */
    double f_x ( double x);     /* CALCULATION OF DERIVATIVE */
    double x0,x1,f_0,f0;
    int n,i;
    clrscr();
    printf("\n      NEWTON RAPHSON METHOD TO FIND ROOT OF AN EQUATION");
    printf("\n\n            f(x) = x*x*x - 5*x + 3");
    printf("\n\nEnter the value of initial "
           "approximation  x0 = ");
    scanf("%lf",&x0);
    /* INITIAL APPROXIMATION x0 IS TO BE ENTERED HERE  */
    printf("\nEnter the number of iterations = ");
    scanf("%d",&n);
    printf("\npress any key for display of iterations...\n");
    getch();
    i = 0;
    while(n-- > 0)
        {
            f0 = fx(x0);           /*     CALCULATE f(x) AT x = x0         */
            f_0 = f_x(x0);     /*   CALCULATE f'(x) AT x = x1  */
            x1  = x0 - (f0/f_0);
            /*     CALCULATION OF NEXT APPROXIMATION      */
            i++;
            printf("\n%d     x%d = %lf                      \n"
                   "\n      f%d = %lf        f_%d = %lf         x%d = %lf\n"
                   ,i,i-1,x0,i-1,f0,i-1,f_0,i,x1);
            x0 = x1;
            getch();
        }
    printf("\n\nThe value of root is = %20.15lf",x1);       /*   ROOT */
}
/*---------- FUNCTION PROCEDURE TO CALCULATE VALUE OF EQUATION --------*/

double fx ( double x)
{
    double f;
    f = x*x*x - 5*x + 3;          /*      FUNCTION f(x)   */
    return(f);
}

/*---------- FUNCTION PROCEDURE TO CALCULATE f'(x0) --------------------*/

double f_x ( double x)
{
    double f_dash;
    f_dash = 3*x*x - 5; /*  DERIVATIVE OF f(x) i.e. f'(x)  */
    return(f_dash);
}
