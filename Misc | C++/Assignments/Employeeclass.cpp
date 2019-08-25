#include<iostream>
#include<string.h>
class emp
{ int emp_id,phone;
  public:
  virtual void cal_tax()=0; //pure virtual func
};
class clerk:public emp
{ float salary;
  char role[10];
  clerk()
  { salary=3000;
    strcpy(role,"clerk");
  }
  void cal_tax()
  { float tax;
    tax=salary/10; // 10%
    cout<<tax;
  }
};
class faculty:public emp
{ float salary;
  char role[10];
  faculty()
  { salary=4000;
    strcpy(role,"faculty");
  }
  void cal_tax()
  { float tax;
    tax=salary/5; // 20%
    cout<<tax;
  }
};
class lab:public emp
{ float salary;
  char role[20];
  lab()
  { salary=3500;
    strcpy(role,"lab assistant");
  }
  void cal_tax()
  { float tax;
    tax=(salary*15)/100; // 15%
    cout<<tax;
  }
};
int main()
{ clerk a; faculty b; lab c;
  a.emp_id=1; a.phone=1;
  b.emp_id=2; b.phone=2;
  c.emp_id=3; c.phone=3;
  //make display function in classes and display
  return 0;
}
