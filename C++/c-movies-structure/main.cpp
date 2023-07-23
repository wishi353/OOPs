/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct movie {
   int num;
   char title[50];
   int year;
   char hero[50];
   char heroine[50];
   float collection;
   int rating;
};
int main() {
   struct movie m[100];
   int n;
   cout<< "Enter the number of movies: ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       m[i].num = i+1;
        cout << "For Movie " << m[i].num << ":" << "\n";

        cout << "Enter movie name: ";
        cin >> m[i].title;

        cout << "Enter year of release: ";
        cin >> m[i].year;
        
        cout << "Enter name of hero: ";
        cin >> m[i].hero;
        
        cout << "Enter name of heroine: ";
        cin >> m[i].heroine;
        
        cout << "Collection: ";
        cin >> m[i].collection;
        
        cout << "Ratings: ";
        cin >> m[i].rating;

        cout<<"\n";
   }
   for(int i=0; i<n;i++) 
   {
      cout<<"Number: "<<m[i].num<<"\n";
      cout<<"Title: "<<m[i].title<<"\n";
      cout<<"Year Of Release: "<<m[i].year<<"\n";
      cout<<"Hero: "<<m[i].hero<<"\n";
      cout<<"Heroine: "<<m[i].heroine<<"\n";
      cout<<"Collection (in crores): "<<m[i].collection<<"\n";
      cout<<"Rating: "<<m[i].rating<<"\n";
      cout<<"\n";
   }

    return 0;
}
