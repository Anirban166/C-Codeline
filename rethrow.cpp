#include<iostream>
using namespace std;
int catcher(int);
int main()
{ int a;
 try
 {cin>>a; if(a==1) throw catcher(a);
 }
 catch(int i) { cout<<"exception rethrown"; }
 return 0;
}
int catcher(int x)
{ try{ if(x==1)
return x;
else throw x;}
catch(int i)
{
cout<<"exception thrown";
}
}
