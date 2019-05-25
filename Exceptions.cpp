-----------------------------------------------
//Catch different exceptions -
#include<iostream>
using namespace std;
void test (int x)
{
 if(x==1)
 throw x;
 else if(x==2)
 throw 'x';
 else if(x==3)
 throw 1.5;
}
int main()
{ try
 { test(1); }
 catch(int x)
 cout<<"int caught\n";

try { test(2); }
catch(char x)
cout<<"\n character caught";

try { test(3); }
catch(double y)
cout<<"\n double caught";

return 0;
}
-----------------------------------------------
//Array out of bound exception -
#include<iostream>
using namespace std;
int main()
{ int n=3;
 int a[n],i;
 cout<<"Enter the array \n";
 try
 { for(i=0;i<4;i++)
 if(i<=n)
  cin>>a[i];
   else
    throw a[i];
 
 }
 catch(int x)
 { cout<<"array out of bound exception caught";
 }
 return 0;
}
-----------------------------------------------
//Generic catch -
catch(...) //catch all exceptions (misc. types)
