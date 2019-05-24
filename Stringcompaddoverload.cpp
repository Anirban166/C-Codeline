#include<iostream>
#include<cstring>
using namespace std;
const int MAX=5;
class string
{ char str[MAX];
  public: void input()
          { cout<<"Enter a string \n";
		   cin>>str;
		  }
  void display()
  {cout<<"your string is :"<<str<<endl;
  }
  int operator==(string s2)
  { if(strcmp(str,s2.str)==0)
     return 1; 
	 else return 0;
  }
  string operator+(string s2)
  { string s3;
    strcpy(s3.str,str);
    strcpy(s3.str,s2.str);
    return s3;
  }
};
int main()
{ 
 string s1,s2,s3;
 s1.input();
 s2.input();
 if(s1==s2)
 cout<<"equal \n";
 else
 cout<<"lol";
 s3=s1+s2;
 s3.display();
return 0;
}
