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
  void operator =(A b)
  { x=b.x;
    y=b.x;
    z=b.z;
  }
  void operator +=(A obj)
  { x+=obj.x;
    y+=obj.y;
    z+=obj.z;
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
    cout<<"Assigning p1 to p2:";
    p1=p2; p1.disp(); p2.disp();
   A p4(2,2,2),p5(3,3,3);
     p4.disp(); p5.disp();
     cout<<"Addition of two points considered:";
     p3+=p4;
     p4.disp();
    return 0;
  } 
