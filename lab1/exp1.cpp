// #include<iostream>
// using namespace std;
// class complex{
//     private:
//     int real,img;
//     public:
//     void input(){
//         cin>>real>>img;
//     }
//     void show(){
//         cout<<real;
//         if(img>=0){
//             cout<<"+"<<img<<"i"<<endl;
//         }
// else{
//     cout<<img<<"i"<<endl;
// }

//     }
// };
// int main(){
//     complex c1,c2;
//     c1.input();
//     c2.input();
//     c1.show();
//     c2.show();
// }

#include <iostream>
using namespace std;
class point
{
private:
    int x, y;

public:
    point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void show()
    {
        cout << x << endl;
        cout << y << endl;
    }
};
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    point p(a, b);
    p.show();
}
Footer
