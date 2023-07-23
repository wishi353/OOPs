/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class burger
{
protected:
    int a;

public:
    void quantity()
    {
        cout << "Enter number of burgers: ";
        cin >> a;
    }
};

class amount
{
protected:
    int p;

public:
    void Amount()
    {
        cout << "Cost per burger: ";
        cin >> p;
    }
};

class Total_Cost : public burger, amount
{
protected:
    int tc;

public:
    void total_cost()
    {
        tc = a * p;
        cout << "Total Bill : " << tc;
    }
};

class update_burger : public burger
{
protected:
    int b;

public:
    void Quantity()
    {
        b = a + 50;
        cout << "The updated number of burgers: " << b;
    }
};

class update_total_cost : public amount, update_burger
{
protected:
    int utc;

public:
    // Quantity();
    void bill()
    {
        utc = p * b;
        cout << "Final Bill: " << utc;
    }
};

class final : public update_total_cost
{
public:
    void display()
    {
        bill();
    }
};

int main()
{
    burger b;
    final f;
    b.quantity();
    f.Amount();
    f.display();
    return 0;
}