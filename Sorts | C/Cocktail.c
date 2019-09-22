#include <stdio.h>
#define MAX 8

int main()
{
    int data[MAX];
    int i, j, n, c;
    printf("\nEnter the data");
    for (i = 0; i < MAX; i++)
        {
            scanf("%d", &data[i]);
        }
    n = MAX;
    do
        {
            /*
              * Rightward pass will shift the largest element to its correct place at the end
             */
            for (i = 0;  i < n - 1; i++)
                {
                    if (data[i] > data[i + 1])
                        {
                            data[i] = data[i] + data[i + 1];
                            data[i + 1] = data[i] - data[i + 1];
                            data[i] = data[i] - data[i + 1];
                        }
                }
            n = n - 1;
            /*
              * Leftward pass will shift the smallest element to its correct place at the beginning
              */
            for (i= MAX - 1, c = 0; i >= c; i--)
                {
                    if(data[i] < data[i - 1])
                        {
                            data[i] = data[i] + data[i - 1];
                            data[i - 1] = data[i] - data[i - 1];
                            data[i] = data[i] - data[i - 1];
                        }
                }
            c = c + 1;
        }
    while (n != 0 && c != 0);
    printf("The sorted elements are:");
    for (i = 0; i < MAX; i++)
        {
            printf("%d\t", data[i]);
        }
}
/*
*OUTPUT:
/*
Average case

Enter the data
9 6 2 12 11 9 3 7
The sorted elements are:2       3       6       7       9       9       11      12
/*
Worst case
Enter the data
8 7 6 5 4 3 2 1
The sorted elements are:1         2        3        4        5        6        7        8
/*
*Best case
Enter the data
1 2 3 4 5 6 7 8
The sorted elements are:1     2        3        4        5        6          7         8
*/
