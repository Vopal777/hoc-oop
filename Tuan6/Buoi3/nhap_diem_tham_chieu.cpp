#include <iostream>
using namespace std;

/*
	Đề bài:
	1. Viết hàm void nhapDiemSai(double diem): nhập điểm từ cin >> diem;
		(không có dấu &).
	2. Viết hàm void nhapDiemDung(double &diem): dùng vòng lặp while yêu cầu
		nhập cho đến khi diem >= 0.0 && diem <= 10.0. Nếu nhập sai thì báo
		"Diem khong hop le, nhap lai: " rồi nhập lại.
	3. Trong main(), khai báo double diem = -1;:
		- Gọi nhapDiemSai(diem), rồi in diem (vẫn là -1).
		- Gọi nhapDiemDung(diem), rồi in diem để xem giá trị mới được lưu lại.
*/

void nhapDiemSai(double diem)
{
    cout << "Nhap diem: ";
    cin >> diem;
}

void nhapDiemDung(double &diem)
{
    cout << "Nhap diem: ";
    cin >> diem;

    while (diem < 0.0 || diem > 10)
    {
        cout << "Diem khong hop le, nhap lai: ";
        cin >> diem;
    }
}

int main()
{
    double diem = -1;

    nhapDiemSai(diem);
    cout << "Diem sau khi goi nhapDiemSai: " << diem << endl;

    nhapDiemDung(diem);
    cout << "Diem sau khi goi nhapDiemDung: " << diem << endl;

    return 0;
}
