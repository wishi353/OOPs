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
    int mat[100][100],n,m,i,j,sum=0;
    cout<<"Enter the dimension :";
    cin>>m;
    n=m-1;
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"Enter the element "<<i+1<<j+1<<":";
            cin>>mat[i][j];
            cout<<" ";
        }
        cout<<"\n";
    }
    
    cout<<"Dimension m="<<m<<"\n";
    cout<<"N="<<m<<"\n";
    
    cout<<"Matrix"<<"\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    cout<<"The elements to be added are ";
    for(i=0;i<m;i++)
    {
        if((i==0)||(i==m-1))
        {
            for(j=0;j<m;j++)
            cout<<mat[i][j]<<" ";
        }
        else
        {
            n=n-1;
        cout<<mat[i][n]<<" ";
        
        }
    }
    cout<<"\n\n";
    
    for(i=0;i<m;i++)
    {
        if((i==0)||(i==m-1))
        {
            for(j=0;j<m;j++)
            sum=sum+mat[i][j];
        }
        else
        {
            n=n-1;
        sum=sum+mat[i][n];
        
        }
    }
    cout<<"Sum: "<<sum;
    return 0;
}

