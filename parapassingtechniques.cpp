#include <iostream>
using namespace std;

void callByValue(int x) {
    x = x + 10;
    cout << "Inside callByValue: x = " << x << endl;
}

void callByReference(int &x) {
    x = x + 10;
    cout << "Inside callByReference: x = " << x << endl;
}

void callByAddress(int *x) {
    *x = *x + 10;
    cout << "Inside callByAddress: *x = " << *x << endl;
}

int main() {
    int a = 5, b = 5, c = 5;

    cout << "----- Call by Value -----" << endl;
    cout << "Before: a = " << a << endl;
    callByValue(a);
    cout << "After:  a = " << a << endl << endl;

    cout << "----- Call by Reference -----" << endl;
    cout << "Before: b = " << b << endl;
    callByReference(b);
    cout << "After:  b = " << b << endl << endl;

    cout << "----- Call by Address -----" << endl;
    cout << "Before: c = " << c << endl;
    callByAddress(&c);
    cout << "After:  c = " << c << endl;

    return 0;
}