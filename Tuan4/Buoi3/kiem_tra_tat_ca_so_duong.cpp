// Đề bài: Kiểm tra xem tất cả các phần tử trong mảng có lớn hơn 0 hay không.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100];

    cout << "Nhap so phan tu: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "So phan tu khong hop le: " << endl;
        return 0;
    }

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool tatCaSoDuong = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
        {
            tatCaSoDuong = false;
        }
    }

    if (tatCaSoDuong)
    {
        cout << "Dung" << endl;
    }
    else
    {
        cout << "Sai" << endl;
    }

    return 0;
}
