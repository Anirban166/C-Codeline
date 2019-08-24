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
-------------------------------------(o/p: 5)
#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}
------------------------------------(o/p: 4)
