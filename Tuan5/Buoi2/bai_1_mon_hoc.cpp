#include <iostream>
#include <string>
using namespace std;

/*
Đề bài:
1. Khai báo struct MonHoc:
   - string tenMon; (ví dụ: LapTrinh)
   - double diemGK; (Hệ số 0.4)
   - double diemCK; (Hệ số 0.6)
2. Nhập thông tin môn học từ bàn phím.
3. Tính: diemTK = diemGK * 0.4 + diemCK * 0.6
4. Kiểm tra điều kiện:
   - Nếu diemTK >= 5.0 thì in "DAT MON".
   - Ngược lại: in "HOC LAI".
*/

struct MonHoc
{
    string tenMon;
    double diemGK;
    double diemCK;
};

int main()
{
    MonHoc mh;

    cout << "Nhap ten mon hoc: ";
    cin >> mh.tenMon;
    cout << "Nhap diem giua ky: ";
    cin >> mh.diemGK;
    cout << "Nhap diem cuoi ky: ";
    cin >> mh.diemCK;

    double diemTK = mh.diemGK * 0.4 + mh.diemCK * 0.6;

    cout << "Diem tong ket cua mon " << mh.tenMon << " la: " << diemTK << endl;

    if (diemTK >= 5.0)
    {
        cout << "DAT MON" << endl;
    }
    else
    {
        cout << "HOC LAI" << endl;
    }

    return 0;
}
