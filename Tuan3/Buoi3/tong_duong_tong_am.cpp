#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int a[100];
    int tongDuong = 0;
    int tongAm = 0;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Tinh tong duong_am
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            tongDuong += a[i];
        else
            tongAm += a[i];
    }

    cout << "Tong Duong = " << tongDuong << endl;
    cout << "Tong Am = " << tongAm << endl;

    return 0;
}