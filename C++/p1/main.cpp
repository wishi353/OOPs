/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct student
{
    int rno;
    char name[10];
    int m[5];
    float avg;
    int total;
}s[100],temp;

void input(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter detalis of student "<<i+1<<"\n";
        cout<<"Enter the name of student : ";
        cin>>s[i].name;
        cout<<"Enter the roll number : ";
        cin>>s[i].rno;
        cout<<"Enter the marks in 5 subjects : ";
        for(int j=0;j<5;j++)
        {
            cin>>s[i].m[j];
        }
    }
}

void calculate(int n)
{
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=0;j<5;j++)
        {
          t=t+s[i].m[j];  
        }
        s[i].total = t;
        s[i].avg = t/5;
    }
}

void sort(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(s[i].rno<s[j].rno)
            {
                temp = s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}

void display(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\n\nDetails of student "<<i+1;
        cout<<"\nName : "<<s[i].name;
        cout<<"\nRoll Number : "<<s[i].rno;
        cout<<"\nMarks in 5 sujects : ";
        {
            for(int j=0;j<5;j++)
            {
                cout<<"\n"<<s[i].m[j];
            }
        }
        cout<<"\nTotal Marks : "<<s[i].total;
        cout<<"\nAverage Marks : "<<s[i].avg;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    cout<<"\n\nEnter the details of the students\n\n";
    input(n);
    calculate(n);
    sort(n);
    cout<<"\n\nDisplay the details of the students";
    display(n);
    return 0;
}
