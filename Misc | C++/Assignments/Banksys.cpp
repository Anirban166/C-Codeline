#include<iostream>
using namespace std;
class bank
{ public:
	 int cus;
	 long bal;
	 char name[15];
	 bank transfer(bank);
	 void display();
};
void bank::display()
{ cout<<"bank account name"<<name;
}
bank bank::transfer(bank a)
{ long amt;
  cout<<"Enter amt";
 cin>>amt;
 a.bal=a.bal+amt;
 if(bal<amt)
 cout<<"insuf";
 else 
 bal=bal-amt;
 return a;
}
int main()
{ bank *a[5];
 int i,x,s,d,ch;
 cout<<"Enter bank account information for 2 students";
 for(i=1;i<=2;i++)
 { cout<<"\n enter for customer"<<i; 
   cin>>a[i].name; cin>>a[i].cus; cin>>a[i].bal;
 }
 do{ cout<<"Enter 1 or 2:"; cin>>x;
    switch (X)
    {
	
 case 1: { cout<<"Enter source and destination";
            cin>>s>>d;
            *a[d]=a[s]->transfer(*a[d])
        break;}
        case 2:
        	{ cout<<"Enter source";
        	  cin>>s;
        	a[s].display();
        	break;
			}
    cout<<"do you want to continue (y)";
    cin>>ch;
   }
}while(ch=='y')
return 0;
}
