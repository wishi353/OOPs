/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
struct dept_store {
   int item;
   char name[50];
   int price;
   int available;
};
int main() {
   struct dept_store s[100];
   int n;
   cout<< "Enter the number of products: ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       s[i].item = i+1;
        cout << "For Product " << s[i].item << ":" << "\n";

        cout << "Enter product name: ";
        cin >> s[i].name;

        cout << "Enter price: ";
        cin >> s[i].price;
        
        cout << "Available amount: ";
        cin >> s[i].available;

        cout<<"\n";
   }
   for(int i=0; i<3;i++) {
      cout<<"Product Number: "<<s[i].item<<"\n";
      cout<<"Name: "<<s[i].name<<"\n";
      cout<<"Price: "<<s[i].price<<"\n";
      cout<<"Availability: "<<s[i].available<<"\n";
      cout<<"\n";
   }

    return 1;
}
