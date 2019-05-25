#include<iostream>
using namespace std;

class Matrix
{
        int a[3][3]; //square.
    public:
        void intake();
        void display();
        matrix operator +(Matrix x);
        matrix operator *(Matrix x);
};
void Matrix::intake()
{
        cout<<"\n Enter Matrix Element (3 X 3) : \n";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
void Matrix::display()
{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
Matrix Matrix::operator +(Matrix x)
{
        Matrix y;
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        y.a[i][j]=a[i][j]+x.a[i][j];
                }
        }
        return y;
}

Matrix Matrix::operator +(Matrix x)
{
        Matrix y;
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        y.a[i][j]=a[i][j]*x.a[i][j];
                }
        }
        return y;
}

int main()
{
        Matrix a,b,c,d;	
        cout<<"Enter values for matrix 1:\n";
        a.intake();     
        cout<<"Enter values for matrix 2:\n";
        b.intake();     
        cout<<"\n First Matrix : \n\n";
        a.display();   
        cout<<"\n Second Matrix : \n\n";
        b.display(); 
        c=a+b; d=a*b;
        cout<<"Addition of them :\n";
        c.display();
        cout<<"Multiplication of the same :\n";
        d.display();
        return 0;
}
