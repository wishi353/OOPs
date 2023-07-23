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
    int i, j, n;
    cout<<"Enter the number: ";
    cin>>n;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j < n) 
                cout << "*";
            else
                cout << " ";
            if((i + n) <= j) 
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j) 
                cout << "*";
            else
                cout << " ";
            if(i >= (2 * n - 1) - j)  
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}