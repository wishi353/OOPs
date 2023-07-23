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
int a=1;
int i, j, n;
cout<<"Enter a no:";
cin >> n;
for(i = 1; i <= n/2; i++)
{
for(j = i; j <= n/2; j++)
{
cout <<" ";
}
for(j = 1; j <= i; j++)
{
if(j == 1 || i == n)
{
cout <<a <<" ";
a++;
}
else
{
cout <<" ";
}
}
for(j = 1; j <=i; j++)
{
if(j == i-1 && j < n-1)
{
cout << a;
a++;
}
else
{
cout << " ";
}
}
cout << "\n";
}
return 0;
}