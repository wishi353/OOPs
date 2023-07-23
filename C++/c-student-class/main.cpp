/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class student
{
int rno;
char name[10]; 
public:
void getdata()
{
cout<<"enter rno,name";
cin>> rno >>name;
}
void putdata()
{
cout<<"Name="<<name<<"\n";
cout <<"Rno="<<rno; 
};

};
int main()
{
student s1 ;
s1.getdata();
s1.putdata();
return 1;
}

