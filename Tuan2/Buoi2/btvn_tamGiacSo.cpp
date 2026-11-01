#include <iostream>
using namespace std;

int main()
{
    int h;
    cout << "Nhap chieu cao h: ";
    cin >> h;

    for (int i = h; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}