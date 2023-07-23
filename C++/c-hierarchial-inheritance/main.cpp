/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ program for Hierarchical Inheritance
#include<iostream>
using namespace std;

class A //superclass A
{
public:
void show_A() {
	cout<<"class A"<<endl;
}
};
class B : public A //subclass B
{
public:
void show_B() {
	cout<<"class B"<<endl;
}
};

class C : public A //subclass C
{
public:
void show_C() {
	cout<<"class C"<<endl;
}
};

int main() {
B b; // b is object of class B
cout<<"calling from B: "<<endl;
b.show_B();
b.show_A();
	
C c; // c is object of class C
cout<<"calling from C: "<<endl;
c.show_C();
c.show_A();
return 0;
}