#include <iostream>
#include <string>
using namespace std;

/*
Đề bài:
1. Khai báo struct NhanVien:
   - string maNV;
   - int luongNgay; (ví dụ: 300.000đ)
   - int soNgayCong; (ví dụ: 24 ngày)
2. Tính tiền lương: tongLuong = luongNgay * soNgayCong.
3. Chính sách: Nếu soNgayCong >= 22 ngày thì cộng thêm tiền thưởng 50000 VND.
4. In ra tổng lương thực nhận của nhân viên.
*/

struct NhanVien
{
    string maNV;
    int luongNgay;
    int soNgayCong;
};

void tinhLuongThucNhan(NhanVien nv)
{
    long long tongLuong = nv.luongNgay;
    tongLuong = tongLuong * nv.soNgayCong;

    if (nv.soNgayCong >= 22)
    {
        tongLuong += 50000;
    }

    cout << "Tong luong thuc nhan cua nhan vien " << nv.maNV << " la: " << tongLuong << " VND" << endl;
}

int main()
{
    NhanVien nv;

    cout << "Nhap ma nhan vien: ";
    cin >> nv.maNV;
    cout << "Nhap luong ngay: ";
    cin >> nv.luongNgay;
    cout << "Nhap so ngay cong: ";
    cin >> nv.soNgayCong;

    tinhLuongThucNhan(nv);

    return 0;
}
