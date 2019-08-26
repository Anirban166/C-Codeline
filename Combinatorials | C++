#include<iostream>
using namespace std;

long long C(int n, int r)
{
    long long f[n + 1];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        f[i] = i * f[i - 1];
    return f[n] / f[r] / f[n - r];
}
//Main
int main()
{
    int n, r, m;
    while (1)
        {
            cout<<"Enter total number of objects:(0 to exit) ";
            cin>>n;
            if (n == 0)
                break;
            cout<<"Enter number of objects to be chosen: ";
            cin>>r;
            cout<<"Number of Combinations: "<<C(n, min(r, n - r))<<endl;
        }
}
