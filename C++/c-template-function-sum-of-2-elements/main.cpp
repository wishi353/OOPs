/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

template <typename S>
S sum(S x, S y)
{
    return x+y;
}
int main()
{
    int a,b;
    char c,d;
    float e,f;
    cout<<"Enter the values in integer: ";
    cin>>a>>b;
    cout<<"Enter the character values: ";
    cin>>c>>d;
    cout<<"Enter the values in float: ";
    cin>>e>>f;
    cout<<"Answer:\n";
    cout<<sum<int>(a,b)<<"\n";
    cout<<sum<char>(c,32)<<"\n";
    cout<<sum<char>(c,d)<<"\n";
    cout<<sum<float>(e,f)<<"\n";

    return 0;
}