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

struct HocSinh
{
    string ten;
    double diem;
};

// void inHocSinh(HocSinh hs1, HocSinh hs2)
// {
//     if (hs1.diem > hs2.diem)
//     {
//         cout << "Ten: " << hs1.ten << ", " << "Diem: " << hs1.diem << " > "
//              << "Ten: " << hs2.ten << ", " << "Diem: " << hs2.diem << endl;
//     }
//     else if (hs2.diem > hs1.diem)
//     {
//         cout << "Ten: " << hs2.ten << ", " << "Diem: " << hs2.diem << " > "
//              << "Ten: " << hs1.ten << ", " << "Diem: " << hs1.diem << endl;
//     }
//     else
//     {
//         cout << "2 ban bang diem nhau" << endl;
//     }
// }

void inDiem(HocSinh hs1, HocSinh hs2)
{
    cout << "Ten: " << hs1.ten << ", " << "Diem: " << hs1.diem << " > "
         << "Ten: " << hs2.ten << ", " << "Diem: " << hs2.diem << endl;
}

void xetDiem(HocSinh hs1, HocSinh hs2)
{
    if (hs1.diem > hs2.diem)
        inDiem(hs1, hs2);
    else if (hs2.diem > hs1.diem)
        inDiem(hs2, hs1);
    else
        cout << "2 ban bang diem nhau" << endl;
}

int main()
{
    HocSinh hs1, hs2;

    cout << "Nhap ten hs: ";
    cin >> hs1.ten;
    cout << "Nhap diem: ";
    cin >> hs1.diem;

    cout << "Nhap ten hs: ";
    cin >> hs2.ten;
    cout << "Nhap diem: ";
    cin >> hs2.diem;

    // inHocSinh(hs1, hs2);
    xetDiem(hs1, hs2);

    return 0;
}
