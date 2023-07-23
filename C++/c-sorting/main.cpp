/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>
using namespace std;
int n;
struct student
{
    char name[100];
    int roll_number;
    int m1,m2,m3,m4,m5;
    int total;
    float average;
    void sort_roll_number();

}s[100],temp;

void sort_roll_number(void)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(s[i].roll_number>s[j].roll_number)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"The name of the student is: "<<s[i].name<<endl;
        cout<<"The roll number of the student is: "<<s[i].roll_number<<endl;
        cout<<"Marks in 5 subjects: "<<endl;
        cout<<s[i].m1<<s[i].m2<<s[i].m3<<s[i].m4<<s[i].m5<<endl;
         cout<<"Total: "<<s[i].total<<endl;
         cout<<"Average: "<<s[i].average<<endl;
    }
}
int main()
{
    cout<<"Enter the number of students: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {   cout<<"For student "<<i+1<<endl;
        cout<<"Enter the name of the student: ";
        cin>>s[i].name;
        cout<<"Enter the roll_number of the sutdent: ";
        cin>>s[i].roll_number;
        cout<<"Enter the marks of the student: "<<endl;
        cin>>s[i].m1>>s[i].m2>>s[i].m3>>s[i].m4>>s[i].m5;
        s[i].total=s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
        s[i].average=s[i].total/5;
        cout<<endl;
    }
    sort_roll_number();


    return 0;
}
