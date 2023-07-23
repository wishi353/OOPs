/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class car
{
public:
int n;
public:
int model()
{
cout<<"1.Honda\n2.Maruti\n3.Ford\n4.Audi\n";
cout<<"Select the option: ";
cin>>n;
return n;

}
};

class M1:public car
{
//private:
//int c;
public:
int c;
c = model();
void capacity( )
{
cout<<"Capacity: ";
switch(c)
{
case 1:
cout<<"67";
break;
case 2:
cout<<"45";
break;
case 3:
cout<<"86";
break;
case 4:
cout<<"97";
break;
default:
cout<<"Invalid input";
break;
}
}
};

class M2:public car
{
//private:
//int e;
public:
int e;
e = model();
void engine()
{
cout<<"Engine: ";
switch(e)
{
case 1:
cout<<"656";
break;
case 2:
cout<<"459";
break;
case 3:
cout<<"862";
break;
case 4:
cout<<"974";
break;
default:
cout<<"Invalid input";
break;
}
cout<<"\n";
}
};

int main()
{
//car c1;
//c1.model();
//int n;

/*cout<<"1.Honda\n2.Maruti\n3.Ford\n4.Audi\n";
cout<<"Select the option: ";
cin>>n;*/


M1 m1;
m1.capacity();

M2 m2;
m2.engine();

return 1;

}