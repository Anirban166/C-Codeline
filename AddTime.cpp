#include<iostream>
using namespace std;
class time
{ int hours,mins;
 public:
 	void settime(int h, int m)
 	{ hours=h; mins=m;
	 }
	 time addtime(time t)
	 { time t3;
	 t3.mins=mins+t.mins;
	 t3.hours=hours+t.hours+t3.mins/60;
	 t3.mins=t3.mins%60;
	 return t3;
	 }
	 void display()
{ cout<<hours<<":"<<mins;
}

};

// if function addtime was outside : (global)
// time time::addtime(time t)
// (return type) (class name)::(funcname(args))
// { }

int main()
{ time t1,t2,t3;
  t1.settime(2,30);
  t2.settime(3,30);
  t3=t2.addtime(t1);
  cout<<"\n resultant time :\n"; t3.display();
return 0;
}
