#include <iostream>
using namespace std;
struct Point
{
    double a;
    double b;
};

int main()
{
    Point p1 = {10, 20};
    cout << p1.a << " " << p1.b << endl;
    Point p2 = {30, 20};
    cout << p2.a << " " << p2.b << endl;
    Point p3 = {50, 20};
    cout << p3.a << " " << p3.b << endl;
    return 0;
}