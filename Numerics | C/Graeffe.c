#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float coe[10],sq[10],mul[10]= {0},ans[10],f_ans[10];
    float temp,div=0.5;
    int c,po,ctr,ctr1,ctr2,N;
    clrscr();
    printf("\nEnter the Highest Power::");
    flushall();
    scanf("%d",&po);
    N=po;
//Scanning Equationfor(ctr=po;ctr>=0;ctr--)
    {
        printf("\nEnter the value of %d=   ",ctr);
        scanf("%f",&coe[ctr]);
    }
    do
        {
            c=po;
//Squaring the value:for(ctr=po;ctr>=0;ctr--)
            {
                sq[ctr]=coe[ctr]*coe[ctr];
            }
//Multiplying & placing in another arrayfor(ctr=po,ctr1=po-1;ctr>=0,ctr1>0;ctr--,ctr1--)
            {
                mul[ctr1]=(coe[ctr]*coe[ctr-2])*(-2);
            }
//Adding the sq[] with mul[]for(ctr=po;ctr>=0;ctr--)
            {
                ans[ctr]=sq[ctr]+mul[ctr];
            }
//Dividing the valuesfor(ctr=0;ctr<=po;ctr++)
            {
                temp=ans[ctr]/ans[ctr+1];
                f_ans[ctr]=pow(temp,div);
            }
            for(ctr=0; ctr<=po; ctr++)
                {
                    printf("\n%.4f",f_ans[ctr]);
                }
            div=div/2;
            c--;
        }
    while(c!=0);
    getch();
}
