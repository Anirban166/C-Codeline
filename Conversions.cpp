#include<iostream>
using namespace std;
class mks; //friend reference
class cgs
{ private:
  float cm,gm,sec;
  public:
  cgs()
  { cm=0; gm=0; sec=0;
  }
  cgs(float x,float y,float z)
  { cm=x; gm=y; sec=z;
  }
  void disp_cgs()
  { cout<<cm<<gm<<sec;
  }
  friend mks cgs2mks(cgs);
  friend cgs mks2cgs(mks);
 };
 class mks
{ private:
  float m,kg,sec;
  public:
  mks()
  { m=0; kg=0; sec=0;
  }
  mks(float x,float y,float z)
  { m=x; kg=y; sec=z;
  }
  void disp_mks()
  { cout<<m<<kg<<sec;
  }
  friend mks cgs2mks(cgs);
  friend cgs mks2cgs(mks);
 };
 mks cgs2mks(cgs c)
 { mks t;
   t.cm=c.m/100;
   t.kg=c.gm/1000;
   t.sec=c.sec;
   return t;
  }
  cgs mks2cgs(mks d)
  { cgs t;
   t.cm=d.m*100;
   t.gm=d.kg*1000;
   t.sec=d.sec;
   return t;
   }
   int main()
   { cgs c(200,2500,60);
     c.disp_cgs();
     mks m=cgs2mks(c);
     m.disp_mks();
     mks m2(3,8,30);
     m2.disp_mks();
     cgs c2=mks2cgs(m2);
     c2.disp_cgs();
     return 0;
    }
