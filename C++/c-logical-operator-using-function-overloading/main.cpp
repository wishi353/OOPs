/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int logical(int a,int b)
{
    if(a!=b)
    cout<<"Not equal";
    else
    cout<<"equal";
    
    return 1;
}

int logical(int a,int b,int c,int d)
{
    if(a>b||c>d)
    cout<<"Hello";
    else
    cout<<"Bye";
    
    return 1;
}

int logical(int a,int b,int c)
{
    if(a>b&&b>c)
    cout<<a<<" is greatest";
    else
    if(b>a&&a>c)
    cout<<b<<" is greatest";
    else
    cout<<c<<" is greatest";
    
    return 1;
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
    cout<<logical(a,b)<<"\n";
    cout<<logical(a,b,c,d)<<"\n";
    cout<<logical(a,b,c)<<"\n";
    
    return 0;
}

