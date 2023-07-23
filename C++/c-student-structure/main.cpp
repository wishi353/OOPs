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
    int num;
    char name[100];
    int roll_num;
    int maths;
    int oops;
    int coa;
    int cn;
    int dsa;
    int total;
    float avg;
}
;
int main()
{
    struct student s[100];
    int n,i,a;
    cout<<"Enter the number of students : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
      s[i].num=i+1;
      cout<<"For student "<<s[i].num<<":"<<"\n";
      cout<<"Enter the name : ";
      cin>>s[i].name;
      cout<<"Enter the roll number : ";
      cin>>s[i].roll_num;
      cout<<"Enter maths marks : ";
      cin>>s[i].maths;
      cout<<"Enter OOPs marks : ";
      cin>>s[i].oops;
      cout<<"Enter COA marks : ";
      cin>>s[i].coa;
      cout<<"Enter CN marks : ";
      cin>>s[i].cn;
      cout<<"Enter DSA marks : ";
      cin>>s[i].dsa;
      cout<<"\n";
    }
    for(i=0;i<n;i++)
    {
      cout<<"Student "<<s[i].num<<":"<<"\n";
      cout<<"Enter the name : "<<s[i].name<<"\n";
      cout<<"Enter the roll number : "<<s[i].roll_num<<"\n";
      cout<<"MARKS:"<<"\n";
      cout<<"Maths : "<<s[i].maths<<"\n";
      cout<<"OOPs : "<<s[i].oops<<"\n";
      cout<<"COA : "<<s[i].coa<<"\n";
      cout<<"CN : "<<s[i].cn<<"\n";
      cout<<"DSA : "<<s[i].dsa<<"\n";
      a = s[i].maths+s[i].oops+s[i].coa+s[i].cn+s[i].dsa;
      cout<<"Total : "<<a<<"\n";
      cout<<"Average : "<<a/5<<"\n";
      cout<<"\n";
    }

    return 0;
}