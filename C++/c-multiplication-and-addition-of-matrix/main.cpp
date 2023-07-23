/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], sum[10][10], r, c,i, j,k;
    cout << "Enter number of rows : ";
    cin >> r;
    cout << "Enter number of columns : ";
    cin >> c;
    
    cout << "\n";
    cout<< "Enter elements of matrix 1:" << "\n";
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    cout << "\n";
    cout<< "Enter elements of matrix 2:" << "\n";
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            mult[i][j]=0;
        }

    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            for(k = 0; k < c; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    cout << "\n";
    cout<< "Multiplication: " << "\n";
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c-1)
            cout << "\n";
    }
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++) 
       {
           sum[i][j]=a[i][j]+b[i][j];
       }
    }
    cout<<"Addition:\n";
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
