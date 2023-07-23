/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

template <typename S>
S sum(S x)
{
    int i,arr[100],sum=0;
    cout<<"Enter the numbers: ";
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int arr[100],i,n;
    cout<<"Enter the number of elements to be added: ";
    cin>>n;
    cout<<sum<int>(n);

    return 0;
}