#include <iostream>
using namespace std;

int main()
{
    int goc = 100;
    int &bietDanh = goc;
    bietDanh = 250;
    cout << goc << endl;
    cout << bietDanh << endl;
    cout << &goc << endl;
    cout << &bietDanh << endl;

    return 0;
}