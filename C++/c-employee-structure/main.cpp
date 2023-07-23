/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int i,j,n;
void input(); 
void calculate(); 
void sort();
void display(); 
void highesttax(); 
void lowesttax();
 
struct employee
{
int empid;
char empname[10]; int grade;
float da,hra,tax,basic,grosssal,netsal;
} e[10],temp;
 
void input()
{
for(i=1;i<=n;i++)
{
cout<<"enter empid ,empname"; 
cin>>e[i].empid>>e[i].empname; 
cout<<"enter grade"; 
cin>>e[i].grade;
}
}

void calculate()
{
for(i=1;i<=n;i++)
{
if (e[i].grade==1) e[i].basic=30000; 
else if (e[i].grade==2) e[i].basic=25000; 
else if (e[i].grade==3) e[i].basic=20000; 
else if (e[i].grade==4) e[i].basic=15000; 
else
cout<< " grade sholud within 1-4";

e[i].hra =(e[i].basic)*(0.25);
e[i].da= (e[i].basic)*(0.20);

e[i].grosssal= e[i].basic+ e[i].hra+ e[i].da;

if (e[i].grosssal <=40000) e[i].tax=0;
if ((e[i].grosssal >40000) && (e[i].grosssal <=75000)) e[i].tax= e[i].grosssal *(0.10);
if ((e[i].grosssal >75000)) e[i].tax= e[i].grosssal *(0.15);

e[i].netsal= e[i].grosssal- e[i].tax;
}
}

void sort()
{
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
 
{
if(e[i].empid>e[j].empid)
{
temp=e[i]; 
e[i]=e[j]; 
e[j]=temp;
}
}
}
}

void display()
{
cout<<"Employee Information"<<endl; 
for(i=1;i<=n;i++)
{
cout<<"Employee name="<<e[i].empname; 
cout<<endl<<"Empid="<<e[i].empid; 
cout<<endl<<"Grade="<<e[i].grade; 
cout<<endl<<"Basic salary="<<e[i].basic; 
cout<<endl<<"Gross salary="<<e[i].grosssal; 
cout<<endl<<"Net salary="<<e[i].netsal;
}
}
 
void highesttax()
{
cout<<"Employee Information of highest tax payer"<<endl; 
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(e[i].tax<e[j].tax)
{
temp=e[i]; 
e[i]=e[j]; 
e[j]=temp;
}
cout<<"Employee name="<<e[i].empname; 
cout<<endl<<"Empid="<<e[i].empid; 
cout<<endl<<"Grade="<<e[i].grade;
cout<<endl<<"tax value="<<e[i].tax;
}
}
}

void lowesttax()
{
cout<<"Employee Information of low tax payer"<<endl; 
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(e[i].tax>e[j].tax)
{
temp=e[i];
e[i]=e[j]; 
e[j]=temp;
}
cout<<"Employee name="<<e[i].empname; 
cout<<endl<<"Empid="<<e[i].empid; 
cout<<endl<<"Grade="<<e[i].grade; 
cout<<endl<<"tax value="<<e[i].tax;
}
}
}
int main()
{
cout<<"enter number of records"<<"\n";
cin>>n; 
input(); 
calculate(); 
sort(); 
display();
highesttax(); 
lowesttax();
return 0;
}

