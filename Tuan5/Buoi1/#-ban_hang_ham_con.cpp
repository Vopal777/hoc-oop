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

void tinh(int donGia, int soLuong)
{
    int sum = 0;

    sum = donGia * soLuong;
    cout << "Thanh tien: " << sum << " " << "VND" << endl;
}

int main()
{
    // int sum = 0;

    MonHang money;
    cout << "Mon hang: ";
    cin >> money.maHang;
    cout << "Don gia: ";
    cin >> money.donGia;
    cout << "So luong: ";
    cin >> money.soLuong;

    // sum = money.donGia * money.soLuong;
    // cout << "Thanh tien: " << sum << " " << "VND" << endl;
    tinh(money.donGia, money.soLuong);
    return 0;
}