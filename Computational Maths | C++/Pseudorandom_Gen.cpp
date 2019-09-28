#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main()
{
    double x;
    int k;
    char ch;
    clrscr();
    printf("\n        Computational Techniques - J. S. CHITODE");
    printf("\n              PSEUDORANDOM NUMBER GENERATION\n");
    randomize();  /* INITIALIZATION OF PSEUDORANDOM NUMBER GENERATOR */
    printf("\nThe sequence of pesudorandom numbers between 0 & 1 "
           "is displayed below.\nPress any key to continue and "
           "press 'q' to stop....\n\n");
    k = 0;
    while(ch != 'q')
        {
            x = rand()/(RAND_MAX + 1.0);
            /* CALLING PSEUDORANDOM NUMBER GENERATOR */
            printf("%lf   ",x);
            k++;
            if(k == 6)
                {
                    /* TO PRINT 6 PSEUDORANDOM NUMBERS ON ONE LINE   */
                    printf("\n");
                    k = 0;
                }
            ch = getch();
        }
}
