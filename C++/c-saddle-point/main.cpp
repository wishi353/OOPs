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
    int a[100][100],n,i,j,k,c=0,f=0,mini,maxi;
    cout<<"Enter the dimension: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter element a"<<i+1<<j+1<<": ";
            cin>>a[i][j];
        }
    }
    cout<<"Matrix"<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<n;i++)
    {
        mini = a[i][0];
        c=0;
        for(j=0;j<n;j++)
        {
            if (a[i][j]<mini)
            {
                mini = a[i][j];
                c=j;
            }
        }
        maxi = a[0][c];
        for(k=0;k<n;k++)
        {
            if (a[k][c]>maxi)
            {
                maxi = a[k][c];
            }
        }
        if (mini == maxi)
        {
            f=1;
            cout<<"Saddle point of matrix is: "<<mini;
        }
    }
    if (f==0)
    {
        cout<<"No saddle point";
    }
    return 0;
}