/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int n;
cout<<"Enter number: ";
cin>>n;
	for(int i=1; i<=n; i++){
		int random = (rand() % 10);
		cout<<random<<" ";
	}
	return 0;
}
