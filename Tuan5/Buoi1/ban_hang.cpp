#include <iostream>
#include <String>

using namespace std;
struct MonHang
// ten, tuoi, mssv
{
    string maHang;
    int donGia;
    int soLuong;
};

int main()
{
    int sum = 0;

    MonHang money;
    cout << "Mon hang: ";
    cin >> money.maHang;
    cout << "Don gia: ";
    cin >> money.donGia;
    cout << "So luong: ";
    cin >> money.soLuong;

    sum = money.donGia * money.soLuong;
    cout << "Thanh tien: " << sum << " " << "VND" << endl;
    return 0;
}