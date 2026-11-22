#include <iostream>
using namespace std;

/*
    Đề bài:
    1. Viết hàm void ghiNhanGiaoDich(long long &tongTien, int &soGiaoDich,
        int soTien):
        - Nếu soTien > 0: cộng tongTien += soTien và tăng soGiaoDich++.
    2. Trong main(), khởi tạo long long tong = 0; int dem = 0;.
        - Gọi liên tiếp 3 giao dịch: 150000, -50000 (bị bỏ qua), 2000000000.
        - In tổng tiền và số giao dịch hợp lệ: tong = 2000150000, dem = 2.
*/

void ghiNhanGiaoDich(long long &tongTien, int &soGiaoDich, int soTien)
{
    if (soTien > 0)
    {
        tongTien += soTien;
        soGiaoDich++;
    }
}

int main()
{
    long long tongTien = 0;
    int soTien;
    int soGiaoDich = 0;
    int n;
    do 
    {
        cout << "Nhap so tien: " << endl;
        cin >> soTien;
        
        ghiNhanGiaoDich(tongTien, soGiaoDich, soTien);
        
        cout << "So giao dich hop le: " << soGiaoDich << endl;
        cout << "Tong tien: " << tongTien << endl;

        cout << "Nhap 1 de tiep tuc: " << endl;
        cin >> n;
    }while (n == 1);

    return 0;
}
