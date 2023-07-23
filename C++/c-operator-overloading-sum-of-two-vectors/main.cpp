/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class vector
{
   float x;
   float y;
   float z;
   public:
   vector()
   {}
   vector(float i,float j,float k)
   {
       x=i;
       y=j;
       z=k;
   }
   vector operator +(vector);
   void display(void);
};

vector vector::operator +(vector v)
{
    vector temp;
    temp.x=x+v.x;
    temp.y=y+v.y;
    temp.z=z+v.z;
    return (temp);
}

void vector:: display(void)
{
    cout<<x<<"i+"<<y<<"j+"<<z<<"k";
}

int main()
{
    vector v1,v2,v3;
    float a,b,c,d,e,f;
    cout<<"Enter the i,j,k values of vector 1 respectively : ";
    cin>>a>>b>>c;
    cout<<"Enter the i,j,k values of vector 2 respectively : ";
    cin>>d>>e>>f;
    v1=vector(a,b,c);
    v2=vector(d,e,f);
    v3=v1+v2;
    cout<<"V1 = ";
    v1.display();
    cout<<"\n";
    cout<<"V2 = ";
    v2.display();
    cout<<"\n";
    cout<<"Sum = ";
    v3.display();
    cout<<"\n";

    return 0;
}