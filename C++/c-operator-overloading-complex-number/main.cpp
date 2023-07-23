/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class complex
{
   float x;
   float y;
   public:
   complex()
   {}
   complex(float real,float imag)
   {
       x=real;
       y=imag;
   }
   complex operator +(complex);
   void display(void);
};

complex complex::operator +(complex c)
{
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return (temp);
}

void complex:: display(void)
{
    cout<<x<<"+i"<<y;
}

int main()
{
    complex c1,c2,c3;
    float a,b,c,d;
    cout<<"Enter the real & imag values of complex number 1 respectively : ";
    cin>>a>>b;
    cout<<"Enter the real & imag values of complex number 2 respectively : ";
    cin>>c>>d;
    c1=complex(a,b);
    c2=complex(c,d);
    c3=c1+c2;
    cout<<"C1 = ";
    c1.display();
    cout<<"\n";
    cout<<"C2 = ";
    c2.display();
    cout<<"\n";
    cout<<"C3 = ";
    c3.display();
    cout<<"\n";

    return 0;
}