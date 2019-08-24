#include<iostream>
using namespace std;

class two; //friend ref
class one
{ int a; 
  public:
  friend void swap(one,two);
}o;

class two
{ int b; 
  public:
  friend void swap(one,two);
}t;

void swap(one o,two t)
{ int temp;
  o.a=10;
  t.b=20;
  temp=o.a;
  o.a=t.b;
  t.b=temp;
 cout<<o.a<<t.b;
}

int main()
{ swap(o,t);
  return 0;
}
