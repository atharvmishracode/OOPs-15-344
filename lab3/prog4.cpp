#include <iostream>
using namespace std;


inline int add(int a, int b)
{
    return a + b;
}


int multiply(int a, int b = 2)
{
    return a * b;
}

int calculate(int a, int b)
{
    return a + b;
}

double calculate(double a, double b)
{
    return a + b;
}

int main()
{
    cout << "Addition using inline function: "
         << add(10, 20) << endl;

    cout << "Multiplication using default argument: "
         << multiply(5) << endl;

    cout << "Multiplication with two arguments: "
         << multiply(5, 4) << endl;

    cout << "Function overloading with int: "
         << calculate(10, 20) << endl;

    cout << "Function overloading with double: "
         << calculate(10.5, 20.5) << endl;

    return 0;
}