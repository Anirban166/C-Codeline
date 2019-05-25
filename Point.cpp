#include<iostream>
using namespace std;
class A
{ int x,y,z;
  public:
  A()
  { x=0; y=0; z=0;
  }
  A(int a,int b,int c)
  { x=a; y=b; z=c;
  }
  void disp()
  { cout<<"\n("<<x<<","<<y<<","<<z<<")";
  }
  void operator -()
  { x=-x; y=-y; z=-z;
  }
  A operator +(A a)
  { A b;
    b.x=x+a.x;
    b.y=y+a.y;
    b.z=z+a.z;
    return b;
  }
 };
 int main()
 { A p1(2,3,4),p2(-4,5,7),p3;
     p1.disp(); p2.disp();
     -p1;
      p3=p1+p2;
    cout<<"Negation of p1:";
    p1.disp();
    cout<<"Addition of two points considered:";
    p3.disp();
    return 0;
  } 
