/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Shape
{
public:
virtual void area() = 0;
};

class Triangle : public Shape
{
private:
 int base;
 int height;
public:
 Triangle(int b,int h)
 {
 base=b;
 height=h;
 }
void area()
{
cout<<"Area of Triangle is: "<<(0.5*base*height)<<endl;
}
};

class Rectangle : public Shape
{
private:
int l;
int b;
public:
Rectangle(int x, int y)
{
l = x;
b = y;
}
void area()
{
cout<<"Area of rectangle is: "<<(l*b)<<endl;
}
};

int main()
{
Shape *s;
s = new Triangle(20,30);
s->area();
s = new Rectangle(10, 20);
s->area();
return 0;
}