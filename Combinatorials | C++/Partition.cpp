#include<iostream>
using namespace std;

void printArray(int p[], int n)
{
    for (int i = 0; i < n; i++)
        cout << p[i] << " ";
    cout << endl;
}

void printAllUniqueParts(int n)
{
    int p[n];
    int k = 0;
    p[k] = n;
    while (true)
        {
            printArray(p, k + 1);
            int rem_val = 0;
            while (k >= 0 && p[k] == 1)
                {
                    rem_val += p[k];
                    k--;
                }
            if (k < 0)
                return;
            p[k]--;
            rem_val++;
            while (rem_val > p[k])
                {
                    p[k+1] = p[k];
                    rem_val = rem_val - p[k];
                    k++;
                }
            p[k+1] = rem_val;
            k++;
        }
}

int main()
{
    int value;
    while(1)
        {
            cout<<"Enter an Integer(0 to exit): ";
            cin>>value;
            if (value == 0)
                break;
            cout << "All Unique Partitions of "<<value<<endl;
            printAllUniqueParts(value);
            cout<<endl;
        }
    return 0;
}

/* Example:
Enter an Integer(0 to exit): 2
All Unique Partitions of 2
2
1 1

Enter an Integer(0 to exit): 3
All Unique Partitions of 3
3
2 1
1 1 1

Enter an Integer(0 to exit): 4
All Unique Partitions of 4
4
3 1
2 2
2 1 1
1 1 1 1

Enter an Integer(0 to exit): 5
All Unique Partitions of 5
5
4 1
3 2
3 1 1
2 2 1
2 1 1 1
1 1 1 1 1

Enter an Integer(0 to exit): 7
All Unique Partitions of 7
7
6 1
5 2
5 1 1
4 3
4 2 1
4 1 1 1
3 3 1
3 2 2
3 2 1 1
3 1 1 1 1
2 2 2 1
2 2 1 1 1
2 1 1 1 1 1
1 1 1 1 1 1 1

Enter an Integer(0 to exit): 0
*/
