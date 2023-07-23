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
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j,k;
    cout << "Enter number of rows for first matrix: ";
    cin >> r1;
    cout << "Enter number of columns for first matrix: ";
    cin >> c1;
    cout << "Enter number of rows for second matrix: ";
    cin >> r2;
    cout << "Enter number of columns for second matrix: ";
    cin >> c2;
    while (c1!=r2)
    {
        cout << "Sorry! column of first matrix is not equal to row of second.";

        cout << "Enter number of rows for first matrix: ";
        cin >> r1;
        cout << "Enter number of columns for first matrix: ";
        cin >> c1;
    
        cout << "Enter number of rows for second matrix: ";
        cin >> r2;
        cout << "Enter number of columns for second matrix: ";
        cin >> c2;
    }
    cout << "\n";
    cout<< "Enter elements of matrix 1:" << "\n";
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    cout << "\n";
    cout<< "Enter elements of matrix 2:" << "\n";
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    cout << "\n";
    cout<< "Output Matrix: " << "\n";
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << "\n";
    }
    return 0;
}