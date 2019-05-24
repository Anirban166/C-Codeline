#include <iostream>
using namespace std;

enum Flags {
    Bold = 1,
    Italics = 2,
    Underlined = 4
};

int main() 
{
    int myDesign = Bold | Underlined; 

        //    00000001
        //  | 00000100 (OR)
        //  ___________
        //    00000101

    cout<<myDesign;

    return 0;
}
