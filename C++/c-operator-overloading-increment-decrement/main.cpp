/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class unary
{
private:
    int i;

public:
    void getdata(int x)
    {
    	i=x;
    }

    void Display()
    {
        cout << "i = " << i << "\n";
    }
    void operator++(void)
    {
    i=++i;
    }
    void operator--(void)
    {
    i=--i;
    }
};

int main()
{
unary u;
int a;
cout<<"Enter the value";
cin>>a;
u.getdata(a);
++u;
cout<<"After increment: ";
u.Display();
cout<<"\n";
--u;
cout<<"After decrement: ";
u.Display();
cout<<"\n";

    return 0;
}




