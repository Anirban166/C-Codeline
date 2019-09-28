#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main()
{
    double f ( double x);     /* FUNCTION TO EVALUATE f(x) */
    double x,sum,n,k;
    clrscr();
    printf("\n         Computational Techniques - J. S. CHITODE");
    printf("\n       NUMERICAL INTEGRATION USING MONTE CARLO METHOD\n");
    printf("\n            The function being integrated over"
           " limits (0,1) is \n\n"
           "            f(x) = x*x*x + 7*x*x + 8*x + 1\n");
    randomize();  /* INITIALIZATION OF PSEUDORANDOM NUMBER GENERATOR */
    printf("\nEnter the number of pseudorandom numbers\nto be "
           "used for monte carlo integration = ");
    scanf("%lf",&n);
    k = n;
    sum = 0;
    while(n-- > 0)
        {
            x = rand()/(RAND_MAX + 1.0);
            /* CALLING PSEUDORANDOM NUMBER GENERATOR */
            sum = sum + f(x);
        }
    sum = sum/k;
    printf("\nThe result of integration is = %lf",sum);
}
/*--------------------------------------------------------------------*/

double f ( double x)
{
    double fx;
    fx = x*x*x + 7*x*x + 8*x + 1;
    /* EVALUATION OF f(x) AT x = PSEUDORANDOM NUMBER  */
    return(fx);
}
