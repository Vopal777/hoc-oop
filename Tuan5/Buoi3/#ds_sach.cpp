#include <iostream>
#include <string>
using namespace std;

/*
	Đề bài:
	1. Khai báo struct Sach { string tenSach; int giaTien; };
	2. Trong main(), khai báo mảng gồm 3 cuốn sách: Sach ds[3];
	3. Dùng vòng lặp for (int i = 0; i < 3; i++) để nhập tên và giá
		từng cuốn sách ds[i].
	4. Dùng vòng lặp for để in danh sách 3 cuốn sách ra màn hình.
	5. Tính tổng số tiền cần trả để mua cả 3 cuốn sách.
*/

struct Sach
{
    string tenSach;
    int giaTien;
};

void inDanhSach(Sach ds[3])
{
    cout << "Danh sach sach:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << ds[i].tenSach << " - " << ds[i].giaTien << " VND" << endl;
    }
}

void tinhTongTien(Sach ds[3])
{
    int tongTien = 0;

    for (int i = 0; i < 3; i++)
    {
        tongTien = tongTien + ds[i].giaTien;
    }

    cout << "Tong so tien can tra: " << tongTien << " VND" << endl;
}

int main()
{
    Sach ds[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Nhap ten sach thu " << i + 1 << ": ";
        cin >> ds[i].tenSach;
        cout << "Nhap gia tien: ";
        cin >> ds[i].giaTien;
    }

    // cout << ds[0].tenSach << " - " << ds[0].giaTien << " VND" << endl;
    inDanhSach(ds);
    tinhTongTien(ds);

    return 0;
}
