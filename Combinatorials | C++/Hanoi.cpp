/*This C++ program displays the solution to the Tower of Hanoi problem using the base-2 representation of the move number with the following rules:-
There is one binary digit (bit) for each disk.
The most significant (leftmost) bit represents the largest disk. A value of 0 indicates that the largest disk is on the initial peg, while a 1 indicates that it’s on the final peg.
The bitstring is read from left to right, and each bit can be used to determine the location of the corresponding disk.
A bit with the same value as the previous one means that the corresponding disk is stacked on top the previous disk on the same peg.
A bit with a different value to the previous one means that the corresponding disk is one position to the left or right of the previous one.*/

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    int n, x;
    cout<<"\nEnter the No. of Disks: ";
    cin>>n;
    for (x = 1; x < (1 << n); x++)
        {
            printf("\nMove from Peg %i to Peg %i", (x&x-1)%3+1, ((x|x-1)+1)%3+1);
        }
    cout<<"\n";
    getch();
}

/* Example:
Move from Peg 1 to Peg 3
Move from Peg 1 to Peg 2
Move from Peg 3 to Peg 2
Move from Peg 1 to Peg 3
Move from Peg 2 to Peg 1
Move from Peg 2 to Peg 3
Move from Peg 1 to Peg 3
Move from Peg 1 to Peg 2
Move from Peg 3 to Peg 2
Move from Peg 3 to Peg 1
Move from Peg 2 to Peg 1
Move from Peg 3 to Peg 2
Move from Peg 1 to Peg 3
Move from Peg 1 to Peg 2
Move from Peg 3 to Peg 2
*/
