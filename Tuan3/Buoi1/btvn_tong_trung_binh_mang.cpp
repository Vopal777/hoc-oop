/*
    De bai: Nhap mang n so nguyen. Tinh va in ra:
    1. Tong tat ca cac phan tu.
    2. Trung binh cong (lay 2 chu so thap phan).

    Vi du:
    Input: n = 4, mang: 2 5 3 8
    Output: Tong = 18, TBC = 4.50

    Luu y: Can ep kieu sang so thuc: (double)sum / n de tranh phep chia
    lay phan nguyen trong C++.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int a[100];
    int tong = 0;
    double trungBinh;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //Tinh tong cac phan tu
    for (int i=0; i < n; i++)
    {
        tong += a[i];
    }

    //Tinh trung binh cong
    trungBinh = (double)tong/n;

    cout << "Tong = " << tong << endl;
    cout << "TBC = " << trungBinh << endl;

    return 0;
}