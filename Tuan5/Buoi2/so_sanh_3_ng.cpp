#include <iostream>
#include <string>
using namespace std;

/*
    Đề bài:
    1. Khai báo struct Nguoi { string ten; int tuoi; };
    2. Trong main(), tạo và nhập thông tin 3 người: a, b, c.
    3. Tìm và in ra người có tuổi lớn nhất.
*/

struct Nguoi
{
    string ten;
    int tuoi;
};

void inKQ(Nguoi a)
{
    cout << "Nguoi lon tuoi nhat: " << a.ten << ", " << a.tuoi << " tuoi" << endl;
}

void xetTuoi(Nguoi a, Nguoi b, Nguoi c)
{
    Nguoi max = a;
    if (b.tuoi > max.tuoi)
    {
        max = b;
    }
    if (c.tuoi > max.tuoi)
    {
        max = c;
    }
    inKQ(max);
}

int main()
{
    Nguoi a, b, c;

    cout << "Nhap ten nguoi thu nhat: ";
    cin >> a.ten;
    cout << "Nhap tuoi: ";
    cin >> a.tuoi;

    cout << "Nhap ten nguoi thu hai: ";
    cin >> b.ten;
    cout << "Nhap tuoi: ";
    cin >> b.tuoi;

    cout << "Nhap ten nguoi thu ba: ";
    cin >> c.ten;
    cout << "Nhap tuoi: ";
    cin >> c.tuoi;

    xetTuoi(a, b, c);

    return 0;
}
