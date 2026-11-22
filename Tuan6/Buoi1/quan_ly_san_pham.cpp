#include <iostream>
#include <string>
using namespace std;

/*
    Mục tiêu: Chuyển từ mảng cứng ds[3] sang nhập số lượng n linh hoạt (SanPham ds[100]).
    Struct: SanPham (maSP, tenSP, donGia, soLuong).
    Yêu cầu: Tách hàm nhap1SP, xuat1SP, nhapDanhSach, xuatDanhSach và tính tổng tiền toàn bộ hóa đơn.
*/

struct SanPham
{
    string maSP;
    string tenSP;
    int donGia;
    int soLuong;
};

void nhap1SP(SanPham &sp)
{
    cout << "Nhap ma san pham: ";
    cin >> sp.maSP;
    cout << "Nhap ten san pham: ";
    cin.ignore();
    getline(cin, sp.tenSP);
    cout << "Nhap don gia: ";
    cin >> sp.donGia;
    cout << "Nhap so luong: ";
    cin >> sp.soLuong;
}

void xuat1SP(SanPham sp)
{
    cout << sp.maSP << " - " << sp.tenSP << " - Don gia: " << sp.donGia << " - So luong: " << sp.soLuong << endl;
}

void nhapDanhSach(SanPham ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap san pham thu " << i + 1 << ":" << endl;
        nhap1SP(ds[i]);
    }
}

void xuatDanhSach(SanPham ds[], int n)
{
    int tongTien = 0;

    cout << "\nDanh sach san pham:" << endl;
    for (int i = 0; i < n; i++)
    {
        xuat1SP(ds[i]);
        tongTien = tongTien + ds[i].donGia * ds[i].soLuong;
    }

    cout << "Tong tien hoa don: " << tongTien << " VND" << endl;
}

int main()
{
    SanPham ds[100];
    int n;

    cout << "Nhap so luong san pham (toi da 100): ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "So luong khong hop le." << endl;
        return 0;
    }

    nhapDanhSach(ds, n);
    xuatDanhSach(ds, n);

    return 0;
}
