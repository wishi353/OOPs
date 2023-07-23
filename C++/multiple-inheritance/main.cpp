/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class book
{
    public:
    char author[100];
    int ed;
    int dd,yy;
    char mm[10];
    int isbn;
    
    void Book()
    {
        cout<<"Author: ";
        cin>>author;
        cout<<"Edition: ";
        cin>>ed;
        cout<<"Publication Date: ";
        cin>>dd>>mm>>yy;
        cout<<"ISBN: ";
        cin>>isbn;
    }
};

class Voice_Recording
{
    public:
    char speaker[100];
    int hr,min,sec;
    int d,y;
    char m[10];
    
    void voice_recording()
    {
        cout<<"Speaker: ";
        cin>>speaker;
        cout<<"Duration: ";
        cin>>hr>>min>>sec;
        cout<<"Recording Date: ";
        cin>>d>>m>>y;
    }
    
};

class Talking_Book:public book, Voice_Recording
{
    public:
    int n,i;
    
    void data()
    {
    cout<<"Enter number of tapes: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Tape: "<<i+1<<"\n";
        Book();
        voice_recording();
    }
    }
};
int main()
{
    Talking_Book tb;
    tb.data();
    return 0;
}