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
    printf("\n\t    SIMPSON'S 1/3 RULE OF INTEGRATION");
    printf("\n\nEnter the lower limit of integration = ");
    scanf("%lf",&lo);        /* ENTER LOWER LIMIT OF INTEGRATION     */
    printf("\n\nEnter the upper limit of integration = ");
    scanf("%lf",&up);        /* ENTER UPPER LIMIT OF INTEGRATION     */
    printf("\n\nEnter the value of h = ");
    scanf("%lf",&h);           /*    ENTER THE VALUE OF h            */
    n = (up - lo)/h;          /* CALCULATION VALUE OF n i.e.STRIPS   */
    x0 = lo;
    for(i = 0; i <= n; i++)    /* LOOP TO CALCULATE VALUE OF f(x)    */
        {
            f[i] = fx(x0);         /*   FUNCTION fx IS CALLED HERE       */
            x0 = x0 + h;     /* NEXT VALUE OF x IS CALCULATED HERE       */
        }
    sum = 0;
    for(i = 1; i <= n-1; i = i + 2)
        {
            sum = sum + 4*f[i];  /* THIS IS  sum = 4 * ( odd ordinates )   */
        }
    for(i = 2; i <= n-1; i = i + 2)
        {
            sum = sum + 2*f[i]; /* THIS IS  sum = 2 * ( even ordinates )   */
        }
    result = (h/3) * ( f[0] + f[n] + sum );
    /*    Result = (h/3) * (4 * sum of odd ordinates
    		      + 2 * sum of even rdinates )     */
    printf("\n\nThe result of integration is = %lf",result);
}

double fx ( double x)       /* FUNCTION TO CALCULATE VALUE OF f(x)  */
{
    double f;
    f = 1/(1+x);           /*    function f(x) = 1(1 + x)           */
    return(f);
}
