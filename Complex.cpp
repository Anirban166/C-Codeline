//complex no. addition -
#include<iostream>
using namespace std;
class complex
{ int real, img;
   public:
   void setdata(int r,int i)
   { real=r; img=i;
   }
   complex sum(complex x)
   { complex c;
     c.real=real+x.real;
     c.img=img+x.img;
     return c;
   }
   void display()
   { cout<<real<<"+"<<img<<"f";
   }
};
int main()
{ complex c1,c2,c3;
  c1.setdata(2,2); c2.setdata(2,2); c3=c1.sum(c2); c3.display();
  return (0);
}
----------------------------------------------------------------
//complex no. multiplication -
#include<iostream>
using namespace std;
class complex
{ int real, img;
   public:
   void setdata(int r,int i)
   { real=r; img=i;
   }
   complex mul(complex y)
   { complex c;
     c.real=(real*y.real)-(img*y.img);
     c.img=(real*y.img)+(img*y.real);
     return c;
   }
   void display()
   { cout<<real<<"+"<<img<<"f";
   }
};
int main()
{ complex c1,c2,c3;
  c1.setdata(2,2); c2.setdata(2,2); c3=c1.mul(c2); c3.display();
  return (0);
}
