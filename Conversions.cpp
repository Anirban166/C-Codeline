#include<iostream>
using namespace std;
class mks; //declare mks class pre-hand for reference to mks class for friend function in cgs.
class cgs
{ private:
  // cgs units: centimetre,gram,second.(length,weight,time)
  float cm,gm,sec; 
  public:
  //Default constructor
  cgs()
  { cm=0; gm=0; sec=0;
  }
  //Paramterized constructor
  cgs(float x,float y,float z)
  { cm=x; gm=y; sec=z;
  }
  void disp_cgs()
  { cout<<cm<<"\t"<<gm<<"\t"<<sec;
  }
  void disp_cgs1()
  { cout<<cm;
  }
  void disp_cgs2()
  { cout<<gm;
  }
  void disp_cgs3()
  { cout<<sec;
  }
  //friend functions:
  friend mks cgs2mks(cgs);
  friend cgs mks2cgs(mks);
 };
 class mks
{ private:
  // mks units: metre,kilogram,second.(length,weight,time)
  float m,kg,sec; 
  public:
  //Default constructor
  mks()
  { m=0; kg=0; sec=0;
  }
  //Parameterized constructor
  mks(float x,float y,float z)
  { m=x; kg=y; sec=z;
  }
  void disp_mks()
  { cout<<m<<"\t"<<kg<<"\t"<<sec;
  }
  void disp_mks1()
  { cout<<m;
  }
  void disp_mks2()
  { cout<<kg;
  }
  void disp_mks3()
  { cout<<sec;
  }
  friend mks cgs2mks(cgs);
  friend cgs mks2cgs(mks);
 };
 //mks->cgs conversion:
 mks cgs2mks(cgs c)
 { mks t;
   t.m=c.cm/100;
   t.kg=c.gm/1000;
   t.sec=c.sec;
   return t;
  }
 //cgs->mks conversion:
  cgs mks2cgs(mks d)
  { cgs t;
   t.cm=d.m*100;
   t.gm=d.kg*1000;
   t.sec=d.sec;
   return t;
   }
   int main()
   { float v1,v2,v3;
     int x,y,z;
     cout<<"MKS <-> CGS converter menu:\n";
  do{
     cout<<"Enter 1 for CGS to MKS conversion or 2 for MKS to CGS conversion. \n";
     cin>>x;
     switch(x)
     { case 1: { cout<<"If you want to convert all three measurement parameters (distance,weight and time), input 0. Else input 1 for distance, 2 for weight and 3 for time conversion respectively.";
                 cin>>z;
                 switch(z)
                { case 0: {cout<<"Enter values for distance,weight and time in centimetre,gram,second. \n";
                          cin>>v1>>v2>>v3;
                          cout<<"In CGS system, values(centimetre,gram,second) are: \n";
                          cgs c(v1,v2,v3); 
                          c.disp_cgs();
                          cout<<endl<<"Corresponding values in MKS system: \n";
                          mks m=cgs2mks(c);
                          m.disp_mks();
                          cout<<endl;
                          break;
                          }
                  case 1: {cout<<"Enter value for distance in centimetre. \n";
                          cin>>v1;
                          cout<<"In CGS system, distance value is: \n";
                          cgs c(v1,0,0); 
                          c.disp_cgs1();
                          cout<<endl<<"Corresponding value in MKS system: \n";
                          mks m=cgs2mks(c);
                          m.disp_mks1();
                          cout<<endl;
                          break;
                          }
                  case 2: {cout<<"Enter value for weight in gram. \n";
                          cin>>v2;
                          cout<<"In CGS system, weight value is: \n";
                          cgs c(0,v2,0); 
                          c.disp_cgs2();
                          cout<<endl<<"Corresponding value in MKS system: \n";
                          mks m=cgs2mks(c);
                          m.disp_mks2();
                          cout<<endl;
                          break;
                          }
                  case 3: {cout<<"Enter value for time in second. \n";
                          cin>>v3;
                          cout<<"In CGS system, time value is: \n";
                          cgs c(0,0,v3); 
                          c.disp_cgs3();
                          cout<<endl<<"Corresponding value in MKS system: \n";
                          mks m=cgs2mks(c);
                          m.disp_mks3();
                          cout<<endl;
                          break;
                          }                 
                }
                break; 
               }
       case 2: { cout<<"If you want to convert all three measurement parameters (distance,weight and time), input 0. Else input 1 for distance, 2 for weight and 3 for time conversion respectively.";
                 cin>>z;
                 switch(z)
                 { case 0: { cout<<"Enter values for distance,weight and time in metre,kilogram,second. \n";
                             cin>>v1>>v2>>v3;
                             cout<<"In MKS system, values(metre,kilogram,second) are: \n";
                             mks m2(v1,v2,v3);
                             m2.disp_mks();
                             cout<<endl<<"Corresponding values in CGS system: \n";
                             cgs c2=mks2cgs(m2);
                             c2.disp_cgs();
                             cout<<endl;
                             break;
                            
                           }
                    case 1: { 
                            cout<<"Enter value for distance in metre. \n";
                             cin>>v1;
                             cout<<"In MKS system, disance value is: \n";
                             mks m2(v1,0,0);
                             m2.disp_mks1();
                             cout<<endl<<"Corresponding values in CGS system: \n";
                             cgs c2=mks2cgs(m2);
                             c2.disp_cgs1();
                             cout<<endl;
                             break;
                           }
                    case 2: {
                             cout<<"Enter value for weight in kilogram. \n";
                             cin>>v2;
                             cout<<"In MKS system, weight value is: \n";
                             mks m2(0,v2,0);
                             m2.disp_mks2();
                             cout<<endl<<"Corresponding values in CGS system: \n";
                             cgs c2=mks2cgs(m2);
                             c2.disp_cgs2();
                             cout<<endl;
                             break;
                           }
                    case 3: {
                             cout<<"Enter value for time in second. \n";
                             cin>>v3;
                             cout<<"In MKS system, time value is: \n";
                             mks m2(0,0,v3);
                             m2.disp_mks3();
                             cout<<endl<<"Corresponding values in CGS system: \n";
                             cgs c2=mks2cgs(m2);
                             c2.disp_cgs3();
                             cout<<endl;
                             break;
                           }
                     
                 }
                  
                }
     }
    cout<<"Do you want to continue? (input 1 for continue, otherwise no)\n";
    cin>>y;
    }while(y==1);    
     return 0;
    }
