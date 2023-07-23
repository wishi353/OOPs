/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> 

using namespace std; 

template <class T> 

int swapping(T& x, T& y) 

{ 

 T t; 

 t = x; 

 x = y; 

 y = t; 

 return 0; 

} 

int main() 

{ 

 int a, b; 

 cout<<"enter a and b values\n"; 

 cin>>a>>b; 

 cout<<"Before swapping"<<" "<<a<<" "<<b<<endl; 

 swapping(a, b); 

 cout <<"After Swapping"<<" "<< a << " " << b << endl; 

 return 0; 

} 