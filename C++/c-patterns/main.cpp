/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    //for (i=0;i<=n;i++)
    //cout<<"*";
    cout<<"\n";
    for(i=n;i>0;i-=2)
    {
        for(j=1;j<=i;j++)
        cout<<"*";
    cout<<"\n";
    }
    return 0;
}