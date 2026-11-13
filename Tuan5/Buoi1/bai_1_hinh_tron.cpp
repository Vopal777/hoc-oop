#include <iostream>
using namespace std;

/*
Đề bài:
1. Khai báo struct HinhTron { double banKinh; };
2. Nhập bán kính từ bàn phím.
3. Tính và in ra:
   - Chu vi = 2 * 3.14 * tron.banKinh
   - Diện tích = 3.14 * tron.banKinh * tron.banKinh
4. Ví dụ: Nhập bán kính = 5 -> Chu vi = 31.4, Diện tích = 78.5
*/

struct HinhTron
{
    double banKinh;
};

int main()
{
    double chuVi = 0;
    double dienTich = 0;

    HinhTron tron;
    cout << "Ban kinh: ";
    cin >> tron.banKinh;

    chuVi = 2 * 3.14 * tron.banKinh;
    dienTich = 3.14 * tron.banKinh * tron.banKinh;

    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;

    return 0;
}
