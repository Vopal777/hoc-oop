/*
    De bai: Nhap mang n so nguyen. Hay dem va in ra so luong so chan,
    so le, so am va so 0.

    Vi du:
    Input: n = 6, mang: -3 4 0 -2 7 8
    Output: Chan: 3, Le: 2, Am: 2, Khong: 1
*/

#include <iostream>
using namespace std;

int main()
{
    int demChan = 0;
    int demLe = 0;
    int demKhong = 0;
    int demAm = 0;
    int n;
    int a[100];
    cout << "Nhap n: " << endl;
    cin >> n;

    cout << "Mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            demKhong++;
        }
        else if (a[i] % 2 == 0)
        {
            demChan++;
        }
        else
        {
            demLe++;
        }

        if (a[i] < 0)
        {
            demAm++;
        }
    }

    cout << "Chan: " << demChan << endl;
    cout << "Le: " << demLe << endl;
    cout << "Am: " << demAm << endl;
    cout << "Khong: " << demKhong << endl;

    return 0;
}
