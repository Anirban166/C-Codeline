#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double y[20][20],x[20],xr,yr,h,r,sum,fy,facto;
    int i,j,k,n,m,t;
    clrscr();
    printf("\n\tNEWTON'S BACKWARD DIFFERENCES INTERPOLATION TECHNIQUE");
    printf("\n\nEnter the number of entries (max 20) = ");
    /* ENTER THE NUMBER OF ENTRIES IN THE TABLE   */
    scanf("%d",&n);
    for(i = 0; i < n; i++)
        {
            /*  LOOP TO GET x AND y = f(x) IN THE TABLE   */
            printf("x%d = ",i);
            scanf("%lf",&x[i]);
            printf("           y%d = ",i);
            scanf("%lf",&y[i][0]);
        }
    printf("\nEnter the value of xr at which  y = f(x)\nis to be "
           "interpolated, xr  = ");
    scanf("%lf",&xr);
    h =  x[1] - x[0];
    r = (xr - x[n-1])/h;		/* CALCULATE VALUE OF 'r'  */
    printf("\nThe value of h = %lf    and  value of r = %lf\n",h,r);
    k = 0;
    for(j = 1; j < n; j++)
        {
            /*  LOOP TO CALCULATE BACKWARD DIFFERENCES  */
            k++;
            for(i = n-1; i >= k; i--)
                {
                    y[i][j] = y[i][j-1] - y[i-1][j-1];
                }
        }
    sum = 0;
    for(t = 1; t < n; t++)
        {
            /* LOOP FOR NEWTON'S  BACKWARD DIFFERENCE INTERPOLATION FORMULA */
            fy = 1;
            facto = 1;
            for(m = 0; m < t; m++)
                {
                    fy = fy * (r + m);
                    facto = facto * (m + 1);
                }
            fy = fy * (y[n-1][t]/facto);
            sum = sum + fy;
        }
    yr = sum + y[n-1][0];
    printf("\nThe value of y = f(x) at xr = %lf is yr = %lf", xr,yr);
}
