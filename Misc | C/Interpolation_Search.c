#include <stdio.h>
#include <stdlib.h>
int interpolationsearch(int sortedArray[], int toFind, int len)
{
    int low = 0;
    int high = len - 1;
    int mid;
    while (sortedArray[low] <= toFind && sortedArray[high] >= toFind)
        {
            if (sortedArray[high] - sortedArray[low] == 0)
                return (low + high)/2;
            mid = low + ((toFind - sortedArray[low]) * (high - low)) / (sortedArray[high] - sortedArray[low]);
            if (sortedArray[mid] < toFind)
                low = mid + 1;
            else if (sortedArray[mid] > toFind)
                high = mid - 1;
            else
                return mid;
        }
    if (sortedArray[low] == toFind)
        return low;
    else
        return -1;
}
int main()
{
    int arr[200], len, number, i, pos;
    printf("How many elements you want to enter: ");
    scanf("%d", &len);
    printf("\nEnter %d elements in increasing order: ", len);
    for (i = 0; i < len; i++)
        {
            scanf("%d", &arr[i]);
        }
    printf("\nEnter an element to search: ");
    scanf("%d", &number);
    pos = interpolationsearch(arr, number, len);
    if (pos != -1)
        printf("\nElement found at postion %d . ", pos);
    else
        printf("\nElement NOT found!!!");
    return 0;
}
