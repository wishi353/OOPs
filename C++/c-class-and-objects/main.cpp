/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class add
{
    private:
    int x;
    int y;
    public:
    void perform(int m, int n)
    {
        int z;
        x=m;
        y=n;
        z = x+y;
        cout<<"Sum = "<<z<<"\n";
    }
    
};
class sub
{
    private:
    int x;
    int y;
    public:
    void perform(int m, int n)
    {
        int z;
        x=m;
        y=n;
        z = x-y;
        cout<<"Differnce = "<<z<<"\n";
    }
    
};
class mul
{
    private:
    int x;
    int y;
    public:
    void perform(int m, int n)
    {
        int z;
        x=m;
        y=n;
        z = x*y;
        cout<<"Product = "<<z<<"\n";
    }
    
};

int main()
{
    int o,p;
    cout<<"Enter first number= ";
    cin>>o;
    cout<<"Enter second number= ";
    cin>>p;
    add a;
    sub s;
    mul m;
    a.perform(o,p);
    s.perform(o,p);
    m.perform(o,p);

    return 0;
}

