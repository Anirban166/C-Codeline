#include<stdio.h>
#include<stdlib.h>

void do_flip(int *, int, int);

/*Function to implement the pancake sort*/
int pancake_sort(int *list, unsigned int length)
{
    if (length < 2)
        return 0;
    int i, a, max_num_pos, moves;
    moves = 0;
    for (i = length; i > 1; i--)
        {
            max_num_pos = 0;
            for (a = 0; a < i; a++)
                {
                    if (list[a] > list[max_num_pos])
                        max_num_pos = a;
                }
            if (max_num_pos ==  i - 1)
                continue;
            if (max_num_pos)
                {
                    moves++;
                    do_flip(list, length, max_num_pos + 1);
                }
            do_flip(list, length, i);
        }
    return moves;
}

/*Function to do flips in the elements*/
void do_flip(int *list,  int length,  int num)
{
    int swap;
    int i = 0;
    for (i; i < --num; i++)
        {
            swap = list[i];
            list[i] = list[num];
            list[num] = swap;
        }
}

/*Function to print the array*/
void print_array(int list[], int length)
{
    int i;
    for (i = 0; i < length; i++)
        {
            printf("%d ", list[i]);
        }
}

int main(int argc,  char **argv)
{
    int list[9];
    int i;
    printf("enter the 9 elements of array:\n");
    for (i = 0; i < 9; i++)
        scanf("%d", &list[i]);
    printf("\nOriginal: ");
    print_array(list, 9);
    int moves  =  pancake_sort(list, 9);
    printf("\nSorted: ");
    print_array(list, 9);
    printf(" - with a total of %d moves\n",  moves);
}
