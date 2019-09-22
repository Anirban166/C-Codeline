#include <stdio.h>
#define MAX 7

void insertion_sort(int *);

void main()
{
    int a[MAX], i;
    printf("enter elements to be sorted:");
    for (i = 0; i < MAX; i++)
        {
            scanf("%d", &a[i]);
        }
    insertion_sort(a);
    printf("sorted elements:\n");
    for (i = 0; i < MAX; i++)
        {
            printf(" %d", a[i]);
        }
}

/* sorts the input */
void insertion_sort(int * x)
{
    int temp, i, j;
    for (i = 1; i < MAX; i++)
        {
            temp = x[i];
            j = i - 1;
            while (temp < x[j] && j >= 0)
                {
                    x[j + 1] = x[j];
                    j = j - 1;
                }
            x[j + 1] = temp;
        }
}
/*
*OUTPUT:
enter elements to be sorted:8 2 4 9 3 6 1
sorted elements:
 1 2 3 4 6 8 9

 /*Best case
enter elements to be sorted:1 2 3 4 5 6 7
sorted elements:
 1 2 3 4 5 6 7

/*Worst case
enter elements to be sorted:7 6 5 4 3 2 1
sorted elements:
 1 2 3 4 5 6 7
 */
