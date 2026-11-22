#include <iostream>
#include <string>
using namespace std;

/*
	Struct: NhanVien (maNV, hoTen, luong).
	Yêu cầu: Nhập maCanTim, duyệt mảng kiểm tra ds[i].maNV == maCanTim.
	Nếu có thì in thông tin và break; nếu duyệt hết không thấy thì báo "Khong tim thay".
*/

struct NhanVien
{
    string maNV;
    string hoTen;
    int luong;
};

void nhap(NhanVien &nv, int viTri)
{
    cout << "\nNhap ma nhan vien thu " << viTri + 1 << ": ";
    cin >> nv.maNV;
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, nv.hoTen);
    cout << "Nhap luong: ";
    cin >> nv.luong;
}

void xuat(NhanVien nv)
{
    cout << "Ma nhan vien: " << nv.maNV << endl;
    cout << "Ho ten: " << nv.hoTen << endl;
    cout << "Luong: " << nv.luong << endl;
}

int main()
{
    NhanVien ds[100];
    int n;
    string maCanTim;

    cout << "Nhap so luong nhan vien (toi da 100): ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "So luong khong hop le." << endl;
        return 0;
    }

    for (int j = 0; j < n; j++)
    {
        nhap(ds[j], j);
    }

    cout << "\nNhap ma nhan vien can tim: ";
    cin >> maCanTim;

    int i;
    for (i = 0; i < n; i++)
    {
        if (ds[i].maNV == maCanTim)
        {
            xuat(ds[i]);
            break;
        }
    }

    if (i == n)
    {
        cout << "Khong tim thay" << endl;
    }

    return 0;
}
