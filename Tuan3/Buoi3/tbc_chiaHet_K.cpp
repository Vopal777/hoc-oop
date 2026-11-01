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
    int n, K;
    int a[100];
    int tong = 0;
    float trungBinh;
    int dem = 0;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Nhap so nguyen duong K: ";
    cin >> K;
    // Tinh tong cac phan tu
    for (int i = 0; i < n; i++)
    {
        if (a[i] % K == 0 && a[i] != 0)
        {
            tong += a[i];
            dem++; 
        }
    }

    // Tinh trung binh cong
    trungBinh = (float)tong / dem;

    cout << "Tong = " << tong << endl;
    cout << "TBC = " << trungBinh << endl;

    return 0;
}