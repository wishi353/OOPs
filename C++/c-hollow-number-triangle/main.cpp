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
cout<<"Enter a no:";
cin >> n;
for(i = 1; i <= n; i++)
{
for(j = i; j < n; j++)
{
cout <<" ";
}
for(j = 1; j <= i; j++)
{
if(j == 1 || i == n)
{
cout <<j <<" ";
}
else
{
cout <<" ";
}
}
for(j = 1; j < i; j++)
{
if(j == i-1 && j < n-1)
{
cout << j+1;
}
else
{
cout << " ";
}
}
cout << endl;
}
return 0;
}

