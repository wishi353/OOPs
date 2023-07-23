/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
struct employee
{
   int num;
   char name1[50];
   char subject[50];
};
struct student
{
   int num;
   char name2[50];
   char course[50];
};
int main() {
   struct employee e[100];
   int n,i;
   cout<< "Enter the number of employees: ";
   cin>>n;
   for(i=0;i<n;i++)
   {
       e[i].num = i+1;
        cout << "Employee " << e[i].num << ":" << "\n";

        cout << "Enter name: ";
        cin >> e[i].name1;

        cout << "Enter subject: ";
        cin >> e[i].subject;

        cout<<"\n";
   }
   struct student s[100];
   int a,j;
   cout<< "Enter the number of students: ";
   cin>>a;
   for(j=0;j<a;j++)
   {
       s[j].num = j+1;
        cout << "Student " << s[j].num << ":" << "\n";

        cout << "Enter name: ";
        cin >> s[j].name2;

        cout << "Enter Course: ";
        cin >> s[j].course;

        cout<<"\n";
   }
   cout<<"Record Of Employees\n";
   for(i=0; i<n;i++)
   {
      cout<<"Employee "<<e[i].num<<"\n";
      cout<<"Name: "<<e[i].name1<<"\n";
      cout<<"Suject: "<<e[i].subject<<"\n";
      cout<<"\n";
   }
   cout<<"Record Of Students\n";
   for(j=0;j<a;j++)
   {
      cout<<"Student "<<s[j].num<<"\n";
      cout<<"Name: "<<s[j].name2<<"\n";
      cout<<"Course: "<<s[j].course<<"\n";
      cout<<"\n";
   }

    return 1;
}

