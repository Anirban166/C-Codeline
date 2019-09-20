#include<stdio.h>
#include<conio.h>

    void main() 
{
    	int n;
    	float i, sum, t;
    	printf("1+1/2+1/3+......+1/n\n");
    	printf("Enter the value of n\n");
    	scanf("%d",&
    	amp;
    	n);
    	sum=0;
    	for (i=1;i<=n;i++) {
    		t=1/i;
    		sum=sum+t;
    	}
    	printf("%f",sum);
    	getch();
}
