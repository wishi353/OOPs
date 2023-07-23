/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int n,i,k,m,s;
class bank
{
int acc_no;
string name;
string password;
int balance;
public:
bank()
{
acc_no=0;
}
void create_account();
void deposit();
int generate_accno(int i);
void withdraw();
void transfer (bank);
void display();
static void sort(bank a[]);
void delete_account();
};
int main()
{
bank b[100];
cout<<"enter the number of customers: ";
cin>>n;
int choice;
do
{
cout<<"1. create account\n 2. dispaly all accounts\n 3. deposit\n 4.withdraw\n 5.transfer\n 6.display based on account number\n 7.sorting based on balance\n 8.delete account\n 9. exit" <<endl;
cout<<"enter your choice: "<<endl;
cin>>choice;
switch (choice)
{
case 1:for(i=0;i<n;i++)
{
b[i].create_account();
}
break;
case 2:for(i=0;i<n;i++)
{
b[i].display();
}
break;
case 3: cout<<"enter the account number: ";
cin>>k;
b[k].deposit();
break;
case 4: cout<<"enter the account_no:";
cin>>k;
b[k].withdraw();
break;
case 5: cout<<"enter from account_no:";
cin>>k;
cout<<"enter to account no:";
cin>>m;
b[k].transfer(b[m]);
break;
case 6: cout<<"enter the account number to display the details:";
cin>>k;
b[k].display();
break;
case 7: bank::sort(b);
break;
case 8: cout<<"enter the account number to delete:";
cin>>k;
b[k].delete_account();
break;
default:exit (0);
}
cout<<"press 1 to continue"<<endl;
cin>>s;
}
while(s==1);
return 0;
}
void bank::create_account()
{
cout<<"enter"<<i+1<<"customer's details:"<<endl;
cout<<"name: "<<endl;
cin>>name;
acc_no=generate_accno(i);
cout<<"password: "<<endl;
cin>>password;
cout<<"balance:"<<endl;
cin>>balance;
}
int bank::generate_accno(int i)
{
acc_no=acc_no+i;
i++;
return acc_no;
}
void bank::display()
{
cout<<"customer details: "<<endl;
cout<<"name: "<<name<<endl;
cout<<"account number:"<<acc_no<<endl;
cout<<"balance: "<<balance<<endl;
}
void bank::deposit()
{
string p;
int amount;
cout<<"enter the password:";
cin>>p;
if (p==password)
{
cout<<"enter the amount to deposit:";
cin>>amount;
balance=balance+amount;
cout<<"balance: "<<balance;
}
else
{
cout<<"incorrect password..!!"<<endl;
}
}
void bank::withdraw()
{
string p;
int amount;
cout<<"enter the password:";
cin>>p;
if (p==password)
{
cout<<"enter the amount to withdraw: ";
cin>>amount;
if (amount<balance)
{
balance=balance-amount;
cout<<"remaining balance: "<<balance;
}
else
{
cout<<"insufficient balance..!"<<endl;
}
}
else
{
cout<<"incorrect password..!!"<<endl;
}
}
void bank::transfer(bank a)
{
int amount;
string p,q;
cout<<"enter the password for from account: "<<endl;
cin>>p;
cout<<"enter the password for from account: "<<endl;
cin>>q;
if ((p==password) && (q==a.password))
{
cout<<"enter the amount to transfer:";
cin>>amount;
if (amount<balance)
{
a.balance=a.balance+amount;
balance=balance-amount;
cout<<balance<<endl;
cout<<a.balance<<endl;
}
else
{
cout<<"insufficient balance";
}
}
else
{
cout<<"invalid password";
}
}
void bank::sort(bank b[])
{
int i,j;
bank temp;
for(i=0;i<n;i++)
{
for (j=0;j<n;j++)
{
if (b[i].balance<b[j].balance)
{
temp=b[i]; b[i]=b[j]; b[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
b[i].display();
}
}
void bank::delete_account()
{
name="XXX";
acc_no=-1;
balance=-1;
}

