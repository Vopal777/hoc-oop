// Đề bài: Tìm vị trí của số lớn nhất đầu tiên và số nhỏ nhất đầu tiên,
// sau đó hoán đổi giá trị của 2 ô này.
// Ví dụ: Mảng 10 3 25 8 2 có vị trí lớn nhất = 2, vị trí nhỏ nhất = 4.
// Sau khi đổi chỗ, mảng trở thành 10 3 2 8 25.

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
        cout << "So phan tu khong hop le!" << endl;
        return 0;
    }

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int viTriLonNhat = 0;
    int viTriNhoNhat = 0;

    for (int i = 1; i < n; i++)
    {
        
        if (a[i] > a[viTriLonNhat])
        {
            viTriLonNhat = i;
        }

        if (a[i] < a[viTriNhoNhat])
        {
            viTriNhoNhat = i;
        }
    }

    cout << "Vi tri so lon nhat = " << viTriLonNhat << endl;
    cout << "Vi tri so nho nhat = " << viTriNhoNhat << endl;

    int c = a[viTriNhoNhat];
    a[viTriNhoNhat] = a[viTriLonNhat];
    a[viTriLonNhat] = c;

    cout << "Mang sau khi hoan doi: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
