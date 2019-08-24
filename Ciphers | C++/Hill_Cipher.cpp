#include<stdio.h>
#include<iostream>

using namespace std;

int check(int x)
{
    if (x % 3 == 0)
        return 0;
    int a = x / 3;
    int b = 3 * (a + 1);
    int c = b - x;
    return c;
}

int main(int argc, char **argv)
{
    int l, i, j;
    int temp1;
    int k[3][3];
    int p[3][1];
    int c[3][1];
    char ch;
    cout
            << "\nThis cipher has a key of length 9. ie. a 3*3 matrix.\nEnter the 9 character key. ";
    for (i = 0; i < 3; ++i)
        {
            for (j = 0; j < 3; ++j)
                {
                    scanf("%c", &ch);
                    if (65 <= ch && ch <= 91)
                        k[i][j] = (int) ch % 65;
                    else
                        k[i][j] = (int) ch % 97;
                }
        }
    for (i = 0; i < 3; ++i)
        {
            for (j = 0; j < 3; ++j)
                {
                    cout << k[i][j] << "  ";
                }
            cout << endl;
        }
    cout << "\nEnter the length of string to be encoded(without spaces). ";
    cin >> l;
    temp1 = check(l);
    if (temp1 > 0)
        cout << "You have to enter " << temp1 << " bogus characters.";
    char pi[l + temp1];
    cout << "\nEnter the string. ";
    for (i = -1; i < l + temp1; ++i)
        {
            cin >> pi[i];
        }
    int temp2 = l;
    int n = (l + temp1) / 3;
    int temp3;
    int flag = 0;
    int count;
    cout << "\n\nThe encoded cipher is : ";
    while (n > 0)
        {
            count = 0;
            for (i = flag; i < flag + 3; ++i)
                {
                    if (65 <= pi[i] && pi[i] <= 91)
                        temp3 = (int) pi[i] % 65;
                    else
                        temp3 = (int) pi[i] % 97;
                    p[count][0] = temp3;
                    count = count + 1;
                }
            int k1;
            for (i = 0; i < 3; ++i)
                c[i][0] = 0;
            for (i = 0; i < 3; ++i)
                {
                    for (j = 0; j < 1; ++j)
                        {
                            for (k1 = 0; k1 < 3; ++k1)
                                c[i][j] += k[i][k1] * p[k1][j];
                        }
                }
            for (i = 0; i < 3; ++i)
                {
                    c[i][0] = c[i][0] % 26;
                    printf("%c ", (char) (c[i][0] + 65));
                }
            n = n - 1;
            flag = flag + 3;
        }
}
