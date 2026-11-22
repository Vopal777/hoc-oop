#include <iostream>
#include <string>
using namespace std;

struct CauThu
{
    string ten;
    int soBanThang;
};

void inDanhSach(CauThu ds[3])
{
    cout << "Danh sach sach:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << ds[i].ten << " - " << ds[i].soBanThang << " ban thang" << endl;
    }
}

void inKQ(CauThu a)
{
    cout << "Cau thu ghi nhieu ban thang nhat: " << a.ten << " - " << a.soBanThang << " ban thang" << endl;
}

void xetBanThang(CauThu ds[3])
{
    CauThu maxCauThu = ds[0];
    for (int i = 0; i < 2; i++)
    {
        if (ds[i].soBanThang > maxCauThu.soBanThang)
            maxCauThu = ds[i];
    }
    inKQ(maxCauThu);
}

int main()
{
    CauThu ds[3];

    for (int i = 0; i < 2; i++)
    {
        cout << "Nhap ten cau thu " << i + 1 << ": ";
        cin >> ds[i].ten;
        cout << "Nhap ban thang: ";
        cin >> ds[i].soBanThang;
    }

    inDanhSach(ds);
    xetBanThang(ds);

    return 0;
}
