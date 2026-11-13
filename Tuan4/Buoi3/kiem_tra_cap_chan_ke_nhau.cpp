// Đề bài: Kiểm tra trong mảng có ít nhất một cặp số chẵn đứng liền kề nhau hay không.
// Ví dụ: Mảng 1 4 6 3 5 có cặp 4, 6 nên kết quả là YES.

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

    bool coCapChan = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] % 2 == 0 && a[i + 1] % 2 == 0)
        {
            coCapChan = true;
            break;
        }
    }

    if (coCapChan)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
