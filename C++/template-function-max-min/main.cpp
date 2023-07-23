/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

template <typename M>
M maxsize(M x, M y)
{
    return (x>y)?x:y;
}
template <typename m>
m minsize(m l, m p)
{
    return (l<p)?l:p;
}
int main()
{
    int a,b;
    cout<<"input the values: ";
    cin>>a>>b;
    cout<<"Max value: "<<maxsize<int>(a,b)<<"\n";
    cout<<"Min value: "<<minsize<int>(a,b);
    

    return 0;
}

