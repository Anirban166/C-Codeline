#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double y[20],x[20],xr,fy,num,den;
    int i,j,n;
    clrscr();
    printf("\n             LAGRANGE'S INTERPOLATION TECHNIQUE");
    printf("\n\nEnter the number of entries (max 20) = ");
    /* ENTER THE NUMBER OF ENTRIES   */
    scanf("%d",&n);
    for(i = 0; i < n; i++)
        {
            /*  LOOP TO GET x AND y = f(x) IN THE ARRAY */
            printf("x%d = ",i);
            scanf("%lf",&x[i]);
            printf("           y%d = ",i);
            scanf("%lf",&y[i]);
        }
    printf("\nEnter the value of xr at which  y = f(x)\n\t\t\t"
           "is to be interpolated, xr  = ");
    scanf("%lf",&xr);
    fy = 0;
    for(j = 0; j < n; j++)
        {
            /*  LOOP TO CALCULATE LAGRANGE'S INTERPOLATION  */
            num = den = 1;
            for(i = 0; i < n; i++)
                {
                    if(i == j) continue;
                    num = num * (xr - x[i]);
                    den = den * (x[j] - x[i]);
                }
            fy = fy + ((num/den) * y[j]);
        }
    printf("\nThe value of y = f(x) at xr = %lf is yr = %lf", xr,fy);
}
