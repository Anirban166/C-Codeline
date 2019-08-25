#include<iostream>
#include<string.h>
using namespace std;
class person
{ public:
  char name[20];
  int code;
  Person()
  { strcpy(name,"hi");
    code=10;
  }
  void show_person()
  { cout<<name<<code;
  }
};
class account:public virtual person
{ int p;
  public: account() 
  { p=100; }
  void show_acc() { cout<<p; }
};
class admin:virtual public person
{ int a;
  public: admin()
  { a=20; }
  void show_adm() ( cout<<a; }
};
class master:public account,public admin
{ };
int main()
{ master a;
  a.strcpy(a.name,"hi");
  a.code=51;
  a.show_person();
  a.show_acc();
  a.show_adm();
  return 0;
}
