//static data member + normal count function -
#include<iostream>
using namespace std;
class X
{ public:
  static int count;
  void inc();
};
void X::inc()
{ X::count++;
}
int X::count=0; //static init
int main()
{ X a,b,c;
 a.inc();
 b.inc();
 c.inc();
 cout<<"object count:"<<X::count<<endl; //3
}
-------------------------------------------
//static data member + constructor -
#include<iostream>
using namespace std;
class X
{ public:
  static int count;
  X()
  { count++;
  }
  int counter()
  { return count;
  }
};
int X::count=0; //static init

int main()
{ X a,b,c;
 cout<<"object count:"<<t1.counter<<endl; //3
}
-------------------------------------------
//static data member + static member function -
#include<iostream>
using namespace std;
class test
{ int code;
  static int count;
  public:
  void setdata()
  { code=++count;
  }
  void showcode()
  { cout<<"oject number"<<code;
  }
  static void showcount()
  { cout<<"count:"<<count;
  }
  int test::count=0;
  int main()
  { test a,b;
    a.setdata();
    b.setdata();
    test::showcount(); //2
    test c;
    c.setdata();
    test::showcount(); //3
    a.showcode(); //objno. 1
    b.showcode(); //objno. 2
    c.showcode(); //objno. 3
    return 0;
   }
   -------------------------------------------
