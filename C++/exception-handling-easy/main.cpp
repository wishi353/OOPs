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
    int a = 10, b, c;
    cout << "Enter the number: ";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            c = a / b;
            cout<<c;
        }
    }
    catch (int e)
    {
        cout << "Exception by zero is occured" << endl;
    }
    cout << "\nEnd of code" << endl;
return 0;
}