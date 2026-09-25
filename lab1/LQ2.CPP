#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    string branch;

public:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Branch: ";
        cin >> branch;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter Student 1 Details:" << endl;
    s1.input();

    cout << "
Enter Student 2 Details:" << endl;
    s2.input();

    cout << "
Student 1 Details:" << endl;
    s1.show();

    cout << "
Student 2 Details:" << endl;
    s2.show();

    return 0;
}