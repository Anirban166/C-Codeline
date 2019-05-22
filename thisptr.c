#include<iostream>
#include<string.h>
using namespace std;
class person
{ int age; char name[20];
	public:
	person(int age=0, char *n="name")
	{	
	this->age=age;
  strcpy(name,"temp");
	}
	void disp()
	{ cout<<"youngest age: "<<age<<"and name:"<<name;
	}
	person &youngest(person &x)
	{ if(x.age<age)
	  return x;
	  else
	  return *this;
	}
};
int main()
{ person a(14,"Stark"), b(15,"Jarvis"), c;
  c=a.youngest(b);
  c.disp();
  return 0; 
}
