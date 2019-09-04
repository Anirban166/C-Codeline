#include<iostream>
using namespace std;
int main()
{
    int a[16], i, j, k, temp;
    cout<<"enter the elements\n";
    for (i = 0; i < 16; i++)
        {
            cin>>a[i];
        }
    for (i = 1; i < 16; i++)
        {
            for (j = i; j >= 1; j--)
                {
                    if (a[j] < a[j-1])
                        {
                            temp = a[j];
                            a[j] = a[j-1];
                            a[j-1] = temp;
                        }
                    else
                        break;
                }
        }
    cout<<"sorted array\n"<<endl;
    for (k = 0; k < 16; k++)
        {
            cout<<a[k]<<endl;
        }
}
