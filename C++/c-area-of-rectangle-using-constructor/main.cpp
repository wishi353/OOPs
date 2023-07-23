/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std; 
class AreaofRect
{
private:
int length; 
int breadth;
public:

AreaofRect (int l,int b)
{ 
int c;
length=l; 
breadth=b; 
c=length * breadth;
cout<<"area of rectanlge="<<c<<endl;
}
int display()
{
cout<<"length="<<length<<endl; 
cout<<"breadth="<<breadth;
}
};

int main ()
{
AreaofRect R(2,2); 
R.display();

return 0;
 
}
