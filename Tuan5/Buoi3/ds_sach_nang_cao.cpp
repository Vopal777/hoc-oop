#include <iostream>
#include <string>
using namespace std;

/*
	Đề bài:
	1. Khai báo struct Sach { string tenSach; int giaTien; }.
	2. Nhập số lượng sách cần quản lý (tối đa 100 cuốn).
	3. Dùng mảng và vòng lặp for để nhập tên, giá tiền từng cuốn sách.
	4. In danh sách sách và tính tổng số tiền cần trả.
*/

struct Sach
{
    string tenSach;
    int giaTien;
};

int main()
{
    Sach ds[100];
    int soLuong;
    int tongTien = 0;

    cout << "Nhap so luong sach (toi da 100): ";
    cin >> soLuong;

    if (soLuong < 1 || soLuong > 100)
    {
        cout << "So luong sach khong hop le." << endl;
        return 0;
    }

    for (int i = 0; i < soLuong; i++)
    {
        cout << "Nhap ten sach thu " << i + 1 << ": ";
        cin >> ds[i].tenSach;
        cout << "Nhap gia tien: ";
        cin >> ds[i].giaTien;
    }

    cout << "Danh sach sach:" << endl;
    for (int i = 0; i < soLuong; i++)
    {
        cout << ds[i].tenSach << " - " << ds[i].giaTien << " VND" << endl;
        tongTien = tongTien + ds[i].giaTien;
    }

    cout << "Tong so tien can tra: " << tongTien << " VND" << endl;

    return 0;
}
