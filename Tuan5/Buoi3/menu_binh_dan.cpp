#include <iostream>
#include <string>
using namespace std;

struct DoUong
{
    string ten;
    int gia;
};

void inDanhSach(DoUong menu[4])
{
    int dem = 0;
    cout << "Danh sach do uong:" << endl;
    for (int i = 0; i < 4; i++)
    {    
        if (menu[i].gia < 20000)
        {
            dem++;
            cout << "Nhung mon binh dan duoi 20k: "  << menu[i].ten << " - " << menu[i].gia << " VND" << endl;
        }
        else
            cout << "Nhung mon tren 20k: " << menu[i].ten << " - " << menu[i].gia << " VND" << endl;
        
    }
}

void tinhTongTien(DoUong menu[4])
{
    int tongTien = 0;
    int dem = 0;

    for (int i = 0; i < 4; i++)
    {
        tongTien = tongTien + menu[i].gia;
        
    }
   
    cout << "Tong so tien can tra: " << tongTien << " VND" << endl;
    
}

int main()
{
    DoUong menu[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Nhap ten do uong thu " << i + 1 << ": ";
        getline(cin, menu[i].ten);
        cout << "Nhap gia tien: ";
        cin >> menu[i].gia;
        cin.ignore();

    }

    inDanhSach(menu);
    tinhTongTien(menu);

    return 0;
}
