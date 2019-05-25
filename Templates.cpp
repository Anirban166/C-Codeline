Basic template programs -
---------------------------------------------------
(1)Basic class template -
#include<iostream>
using namespace std;
template<class T>
class test 
{ T x,y; public:
         void input()
         { cin>>x>>y; }
         void disp()
         { cout<<x<<y; }
};
int main()
{ test<int>object1; test<float>object2;
  object1.input(); object2.input();
  object1.disp(); object2.disp();
  return 0;
} 
---------------------------------------------------
(2)Basic function template (cube) -
#include<iostream> 
using namespace std;
template<class T>
T cube(T x)
{ return x*x*x;
}
int main()
{ int a=7,b=cube(a);
  float c=1.5,d=cube(c);
  cout<<b<<d;
  return 0;
}
---------------------------------------------------
(3)Swap 2 numbers -
shorthand swap: a=a+b–(b=a); //a=a+b; b=a-b; a=a-b;

#include<iostream>
using namespace std;
template <class X> void swapargs(X &a, X &b)
{
  X temp=a;
  a=b;
  b=temp;
}
int main()
{
  int i=10, j=20;
  float x=15.9, y=28.5;
  
  cout << "Original i, j: " << i << ' ' << j << endl;
  cout << "Original x, y: " << x << ' ' << y << endl;
  
  swapargs(i, j); // swap integers
  swapargs(x, y); // swap floats
  
  cout << "Swapped i, j: " << i << ' ' << j << endl;
  cout << "Swapped x, y: " << x << ' ' << y << endl;
  return 0;
}
---------------------------------------------------
(4)Multiple temps -
#include<iostream>
using namespace std;
template<class T1,class T2>
class test 
{ T1 x, T2 y; public:
         test(T1 m,T2 n) //constructor
         { x=m; y=n; }
         void disp()
         { cout<<x<<y; }
};
int main()
{ test<int,float>object1(5,5.5); test<float,char>object2(12.3,'z');
  object1.disp(); object2.disp();
  return 0;
} 
---------------------------------------------------
