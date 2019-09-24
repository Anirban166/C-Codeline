#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void shakersort(int a[], int n)
{
    int p, i;
    for (p = 1; p <= n / 2; p++)
        {
            for (i = p - 1; i < n - p; i++)
                if (a[i] > a[i+1])
                    swap(&a[i], &a[i + 1]);
            for (i = n - p - 1; i >= p; i--)
                if (a[i] < a[i-1])
                    swap(&a[i], &a[i - 1]);
        }
}
int main()
{
    int arr[10] = {43, 432, 36, 5, 6, 57, 94, 63, 3, 44};
    int i;
    shakersort(arr, 10);
    for (i = 0 ; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}
