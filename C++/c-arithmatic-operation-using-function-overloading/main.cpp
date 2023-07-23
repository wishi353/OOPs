/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int arithmatic(int a,int b,int c,int d,int e)
{
    return a+b+c+d+e;
}

int arithmatic(int a,int b,int c,int d)
{
    return a-b-c-d;
}

int arithmatic(int a,int b,int c)
{
    return a*b*c;
}

int arithmatic(int a,int b)
{
    return a/b;
}

int main()
{
    int a,b,c,d,e;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    cout<<"Enter 4th number: ";
    cin>>d;
    cout<<"Enter 5th number: ";
    cin>>e;
    cout<<arithmatic(a,b,c,d,e)<<"\n";
    cout<<arithmatic(a,b,c,d)<<"\n";
    cout<<arithmatic(a,b,c)<<"\n";
    cout<<arithmatic(a,b)<<"\n";
    
    return 0;
}
