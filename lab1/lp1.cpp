#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    string branch;
};

int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1:" << endl;
    cout << "Name: ";
    cin >> s1.name;
    cout << "Roll No: ";
    cin >> s1.roll;
    cout << "Branch: ";
    cin >> s1.branch;

    cout << "
Enter details of Student 2:" << endl;
    cout << "Name: ";
    cin >> s2.name;
    cout << "Roll No: ";
    cin >> s2.roll;
    cout << "Branch: ";
    cin >> s2.branch;

    cout << "
Student 1 Details:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.roll << endl;
    cout << "Branch: " << s1.branch << endl;

    cout << "
Student 2 Details:" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Roll No: " << s2.roll << endl;
    cout << "Branch: " << s2.branch << endl;

    return 0;
}