#include <iostream>
using namespace std;

int main()
{

    int salary = 50000;

    
    int &newSalary = salary;

   
    newSalary = newSalary + (newSalary * 10 / 100);

   
    cout << "Salary = " << salary << endl;

    return 0;
}