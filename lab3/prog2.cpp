#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    void input(int x, int y);
    void show();
};

inline void Number::input(int x, int y)
{
    a = x;
    b = y;
}

inline void Number::show()
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    Number n;

    n.input(30, 40);
    n.show();

    return 0;
}