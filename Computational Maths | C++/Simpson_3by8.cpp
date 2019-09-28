#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double fx (double x0);      /*   DECLARATION OF A FUNCTION fx   */
    double lo,up,f[20],h,x0,sum,result;
    int i,n;
    clrscr();
    printf("\n\t   SIMPSON'S 3/8 RULE OF INTEGRATION");
    printf("\n\nEnter the lower limit of integration = ");
    scanf("%lf",&lo);        /* ENTER LOWER LIMIT OF INTEGRATION    */
    printf("\n\nEnter the upper limit of integration = ");
    scanf("%lf",&up);        /* ENTER UPPER LIMIT OF INTEGRATION    */
    printf("\n\nEnter the value of h = ");
    scanf("%lf",&h);           /*    ENTER THE VALUE OF h           */
    n = (up - lo)/h;          /* CALCULATION VALUE OF n i.e.STRIPS  */
    x0 = lo;
    for(i = 0; i <= n; i++)    /* LOOP TO CALCULATE VALUE OF f(x)   */
        {
            f[i] = fx(x0);         /*   FUNCTION fx IS CALLED HERE      */
            x0 = x0 + h;     /* NEXT VALUE OF x IS CALCULATED HERE      */
        }
    sum = 0;
    for(i = 1; i <= n-1; i++)
        {
            if(i == 3*(i/3) ) continue;
            sum = sum + 3*f[i];  /*  3 * SUM OF ORDINATES NOT MULTIPLE OF 3 */
        }
    for(i = 3; i <= n-1; i = i + 3)
        {
            sum = sum + 2*f[i]; /*2 * SUM OF ORDINATES WHICH ARE MULTIPLE OF 3*/
        }
    result = (3*h/8) * ( f[0] + f[n] + sum );
    /*Result = (3h/8) * (3 * sum of ordinates not multiple of 3
          + 2 * sum of ordinates which are multiple of 3 )  */
    printf("\n\nThe result of integration is = %lf",result);
}

double fx ( double x)       /* FUNCTION TO CALCULATE VALUE OF f(x)  */
{
    double f;
    f = 4 + 2 * sin(x);           /*    function f(x) = 4 + 2 sin x     */
    return(f);
}
