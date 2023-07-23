/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class examp1
{
    public:
    examp1()
    {
        cout<<"Hey Wassup?!\n";
    }
};
class examp2
{
    public:
    examp2(int a, int b)
    {
        cout<<"Sum: "<<a+b<<"\n";
    }
};
class examp3 // copy constructor
{

    public:
    int x;
    examp3(int m)
    {
        x=m;
    }
    examp3(examp3& e3)
    {
        x=e3.x;
    }
};
class examp4
{
   public:
   examp4()
   {
       cout<<"\nConstructor";
   }
       ~examp4()
          {
              cout<<"\nDestructor\n";
          }
};
int main()
{
    int e,f;
    cin>>e>>f;
    examp1 e1;
    examp2 e2(e,f);
    examp3 e3(e);
    examp3 e5(e3);                
    cout<<e5.x;
    examp4 e4;
    return 1;
}
