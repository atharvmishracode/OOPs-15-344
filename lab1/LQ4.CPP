#include <iostream>
using namespace std;

class Time
{
private:
    int hh, mm, ss;

public:
    void input(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }

    void show()
    {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main()
{
    Time t1, t2;

    int h, m, s;

    cout << "Enter first time (hh mm ss): ";
    cin >> h >> m >> s;

    t1.input(h, m, s);

    cout << "Enter second time (hh mm ss): ";
    cin >> h >> m >> s;

    t2.input(h, m, s);

    cout << "
First Time: ";
    t1.show();

    cout << "Second Time: ";
    t2.show();

    return 0;
}