#include<iostream>
#include<fstream.h>
using namespace std;
int main()
{ //(1) using constructor -
  ofstream outf("Newfile.txt");
  char textdata[30];
  cout<<"Enter textdata: "; cin>>textdata;
  outf<<textdata;  //write to file
  outf.close();
  //-------------------------------------
  ifstream inf("Newfile.txt");
  inf>>textdata;   //read from file
  cout<<textdata;
  inf.close();
  //-------------------------------------
  //(2) using open -
  ofstream fout;
  fout.open("Newfile.txt",ios::out);
  if(!fout) { cout<<"Error"; exit(1); }
  cin>>textdata;
  fout<<textdata;  //write to file
  fout.close();
  //-------------------------------------
  ifstream fin;
  fin.open("Newfile.txt",ios::in);
  if(!fin) { cout<<"error"; exit(1); }
  fin>>textdata;  //read from file
  cout<<textdata;
  fin.close();
  
  return 0;
}  
