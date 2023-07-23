/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdexcept>
using namespace std;

float Division(float num, float den)
{
if (den == 0)
{
throw runtime_error("Math error: Attempted to divide by Zero\n");
}
return (num / den);
}

int main()
{
float numerator, denominator, result;
numerator = 12.5;
denominator = 0;
try {
result = Division(numerator, denominator);
cout << "The quotient is "<< result << endl;
}
catch (runtime_error& e) {
cout << "Exception occurred" << endl << e.what();
}
}

