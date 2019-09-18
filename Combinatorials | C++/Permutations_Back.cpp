#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int i, int n)
{
    int j;
    if (i == n)
        cout<<a<<endl;
    else
        {
            for (j = i; j <= n; j++)
                {
                    swap((a + i), (a + j));
                    permute(a, i + 1, n);
                    swap((a+i), (a + j));
                }
        }
}

int main()
{
    char a[] = "abcd"; 
    permute(a, 0, 3);
    return 0;
}
