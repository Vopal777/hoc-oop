#include <iostream>
using namespace std;

/*
	Đề bài:
	1. Khai báo struct ThoiGian { int gio, phut, giay; };
	2. Nhập vào: giờ, phút, giây (ví dụ: 1 giờ 20 phút 15 giây).
	3. Viết hàm void inThoiGian(ThoiGian tg) in ra dạng: 1h 20p 15s.
	4. Tính tổng số giây đã trôi qua:
		tongGiay = gio * 3600 + phut * 60 + giay
	5. In ra màn hình: Tổng số giây: 4815 giây.
*/

struct ThoiGian
{
    int gio;
    int phut;
    int giay;
};

int main()
{
    int tongGiay = 0;

    ThoiGian tg;
    cout << "Gio: ";
    cin >> tg.gio;
    cout << "Phut: ";
    cin >> tg.phut;
    cout << "Giay: ";
    cin >> tg.giay;

    tongGiay = tg.gio * 3600 + tg.phut * 60 + tg.giay;

    cout << "Thoi gian: " << tg.gio << "h " << tg.phut << "p " << tg.giay << "s" << endl;
    cout << "Tong so giay: " << tongGiay << " giay." << endl;

    return 0;
}
