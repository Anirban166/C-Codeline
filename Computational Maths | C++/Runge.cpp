#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double f (double x0,double y0);  /* DECLARATION OF A FUNCTION f  */
    double y0,y1,x0,x1,h,x,k1,k2,k3,k4,k;
    int i,n;
    clrscr();
    printf("\n\tRUNG KUTTA METHOD TO SOLVE DIFFERENTIAL EQUATION\n");
    printf("\n\nEnter x0 = ");
    scanf("%lf",&x0);                         /* ENTER VALUE OF x0   */
    printf("\n\nEnter y0 = ");
    scanf("%lf",&y0);                         /* ENTER VALUE OF y0   */
    printf("\n\nEnter the value of x at which y is to be found = ");
    scanf("%lf",&x);                          /* ENTER VALUE OF x    */
    printf("\n\nEnter the value of h = ");
    scanf("%lf",&h);                    /*    ENTER THE VALUE OF h   */
    i = 0;
    printf("\nPress any key to see step by step display of results...\n");
    while(x0 < x)     /* LOOP TO CALCULATE y USING RUNG KUTTA METHOD */
        {
            i++;
            k1 = f(x0,y0);
            k2 = f(x0+h/2, y0+(h*k1/2));
            k3 = f(x0+h/2, y0+(h*k2/2));
            k4 = f(x0+h, y0+h*k3);
            /* CALCULATION OF k USING RUNG KUTTA METHOD */
            y1 = y0 + (h/6)*(k1 + 2*k2 + 2*k3 + k4);
            /*     CALCULATION OF y FROM VALUES OF k    */
            x1 = x0 + h;
            printf("\nx%d = %lf      y%d = %lf",i,x1,i,y1);
            x0 = x1;
            y0 = y1;
            getch();
        }
}
/*---------------------------------------------------------------------*/

double f ( double x,double y)  /* FUNCTION TO CALCULATE VALUE OF f(x,y)*/
{
    double y_dash;
    y_dash = 1 + y*y;           /*    function f(x,y) = y' = 1 + y*y   */
    return(y_dash);
}
