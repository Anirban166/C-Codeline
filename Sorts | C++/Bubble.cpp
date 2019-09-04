#include <iostream>
using namespace std;

//Bubble Sort
void bubble_sort (int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
}

int main()
{
    int input_ar[] = {10, 50, 21, 2, 6, 66, 802, 75, 24, 170};
    int n = sizeof (input_ar) / sizeof (input_ar[0]);
    bubble_sort (input_ar, n);
    cout << "Sorted Array : " << endl;
    for (int i = 0; i < n; ++i)
        cout << input_ar[i] << " ";
    return 0;
}
