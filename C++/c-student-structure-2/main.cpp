/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int i,j,n;
void input(); 
void calculate(); 
void sort();
void display();
struct student
{
int rollno;
char name[10]; 
int m[10],total; 
float avg=0;
} s[3],temp;
void input()
{
for(i=1;i<=n;i++)
{
cout<<"enter rno,name"; 
cin>>s[i].rollno>>s[i].name; 
cout<<"enter marks 5"; 
for(j=1;j<=5;j++)
{
cin>>s[i].m[j];
}
}
}
void calculate()
{
int t=0; 
for(i=1;i<=n;i++)
{
for(j=1;j<=5;j++)
{
 
t=t+s[i].m[j];
}
s[i].total= t; 
s[i].avg=s[i].total/5;
}
}
void sort()
{
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(s[i].rollno>s[j].rollno)
{
temp=s[i]; 
s[i]=s[j];
s[j]=temp;;
}
}
}
}
void display()
{
cout<<"student Information"<<"\n"; 
for(i=1;i<=n;i++)
{
cout<<"Rno="; 
cout<<s[i].rollno; 
cout<<"\n"<<"Name="<<s[i].name<<"\n"; 
for(j=1;j<=5;j++)
{
cout<<"Mark "<<j<<"="<<s[i].m[j]<<"\n";
}
cout<<"\n"<<"total="<<s[i].total; 
cout<<"\n"<<"Average="<<s[i].avg<<"\n";
}
}
int main()
{
cout<<"enter no of students records"; 
cin>>n;
input(); 
calculate(); 
sort(); 
display(); 
return 0;
}

