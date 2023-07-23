/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//ADDITION OF MATRIX

#include <iostream>

using namespace std;

int main()
{
    int a[100][100],b[100][100],sum[100][100],i,j,r,c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of coloumns: ";
    cin>>c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter element a"<<i+1<<j+1<<":";
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter element b"<<i+1<<j+1<<":";
            cin>>b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++) 
       {
           sum[i][j]=a[i][j]+b[i][j];
       }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}