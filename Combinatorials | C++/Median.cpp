#include <iostream>
#include <algorithm>
using namespace std;

int median(int [], int);
int getMedian(int ar1[], int ar2[], int n)
{
    int m1;
    int m2;
    if (n <= 0)
        return -1;
    if (n == 1)
        return (ar1[0] + ar2[0]) / 2;
    if (n == 2)
        return (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1])) / 2;
    m1 = median(ar1, n);
    m2 = median(ar2, n);
    if (m1 == m2)
        return m1;
    if (m1 < m2)
        {
            if (n % 2 == 0)
                return getMedian(ar1 + n / 2 - 1, ar2, n - n / 2 + 1);
            else
                return getMedian(ar1 + n / 2, ar2, n - n / 2);
        }
    else
        {
            if (n % 2 == 0)
                return getMedian(ar2 + n / 2 - 1, ar1, n - n / 2 + 1);
            else
                return getMedian(ar2 + n / 2, ar1, n - n / 2);
        }
}

int median(int arr[], int n)
{
    if (n %  2 == 0)
        return (arr[n / 2] + arr[n / 2 - 1]) / 2;
    else
        return arr[n / 2];
}

int main()
{
    int ar1[] = {1, 2, 3, 6};
    int ar2[] = {4, 6, 8, 10};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    if (n1 == n2)
        cout<<"Median is "<<getMedian(ar1, ar2, n1);
    else
        cout<<"Doesn't work for arrays of unequal size"<<endl;
    return 0;
}
