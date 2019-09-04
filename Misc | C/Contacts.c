#include<stdio.h>
#include<string.h>

void main()
{
    struct name
    {
        char fname[20] ;
        char lname[20] ;
    } ;
    struct  name  x[50],temp ;
    int  i,j,n ;
    clrscr() ;
    printf("Enter the number of mobile customers: ") ;
    scanf("%d", &n) ;
    printf("Enter names of mobile customers in the format: \n") ;
    printf("First name   Last name \n") ;
    for(i=0 ; i<n ; i++)
        scanf("%s %s", x[i].fname, x[i].lname) ;
    for(i=0 ; i<n-1 ; i++)
        for(j=0 ; j<n-1-i ; j++)
            if( strcmp(x[j].lname, x[j+1].lname) >0 )
                {
                    temp=x[j] ;
                    x[j]=x[j+1] ;
                    x[j+1]=temp ;
                }
    printf("\nList sorted alphabetically as per last name is as shown:\n") ;
    for(i=0; i<n; i++)
        printf("%s %s \n", x[i].fname, x[i].lname) ;
}
