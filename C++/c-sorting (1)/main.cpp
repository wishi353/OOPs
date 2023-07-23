/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

    void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<",";
    }
    cout<<"\n";
}
void bubble_sort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j<n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    //int A[] = {120, 12, 58, 41, 36, 98, 87};
    //int n = 7;
    int i,n;
    cin>>n;
    int A[100];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Before sorting the element"<<"\n";
    printArray(A, n);
    bubble_sort(A, n);
    cout<<"After sorting the element"<<"\n";
    printArray(A, n);

    return 0;
}