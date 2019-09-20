#include<stdio.h>

main()
{
    float a,r;
    float sum=0;
    printf("Enter the first number of the G.P. series: ");
    scanf("%f",&a);
    printf("Enter the common ratio of G.P. series: ");
    scanf("%f",&r);
    if(1 > r)
        sum = a/(1-r);
    else
        sum = a/(r-1);
    printf("\nSum of the infinite G.P. series: %f",sum);
}
