/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Account
{
    public:
    float base_pay = 60000;
};

class Tax
{
    public:
    float tax_detection = 1000;
    float PF_tax = 190.4546;
};

class Programmer:public Account,Tax
{
    public:
    float bonus = 5000;
    public:
    void salary()
    {
        float sal = base_pay+bonus-tax_detection-PF_tax;
        cout<<"Pay: "<<sal<<"\n";
    }
};

int main()
{
    Programmer p1;
    cout<<"Base Pay: "<<p1.base_pay<<"\n";
    cout<<"Bonus: "<<p1.bonus<<"\n";
    p1.salary();
    return 0;
}