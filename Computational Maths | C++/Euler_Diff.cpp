#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double f (double x0,double y0);  /* DECLARATION OF A FUNCTION f  */
    double y0,y1,x0,x1,h,x;
    int i,n,t;
    clrscr();
    printf("\n       EULER'S METHOD TO SOLVE DIFFERENTIAL EQUATION\n");
    printf("\n\nEnter x0 = ");
    scanf("%lf",&x0);                         /* ENTER VALUE OF x0   */
    printf("\n\nEnter y0 = ");
    scanf("%lf",&y0);                         /* ENTER VALUE OF y0   */
    printf("\n\nEnter the value of x at which y is to be found = ");
    scanf("%lf",&x);                          /* ENTER VALUE OF x    */
    printf("\n\nEnter the value of h = ");
    scanf("%lf",&h);                    /*    ENTER THE VALUE OF h   */
    i = 0;
    printf("\nPress any key to see step be step display of results...\n");
    while(x0 < x)        /* LOOP TO CALCULATE y USING EULER'S FORMULA  */
        {
            i++;
            x1 = x0 + h;
            y1 = y0 + h * f(x0,y0);   /* IMPLEMENTATION OF EULER'S FORMULA */
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
    y_dash = x - y;           /*    function f(x,y) = y' = x - y       */
    return(y_dash);
}
