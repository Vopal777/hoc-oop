// Đề bài: Phần tử a[i] là một "đỉnh" nếu lớn hơn cả phần tử đứng trước và đứng sau.
// Đếm số lượng đỉnh trong mảng, với n >= 3.
// Ví dụ: Mảng 2 7 3 8 5 1 có 2 đỉnh là 7 (vị trí 1) và 8 (vị trí 3).

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100];

    cout << "Nhap so phan tu: ";
    cin >> n;

    if (n < 3 || n > 100)
    {
        cout << "So phan tu phai tu 3 den 100!" << endl;
        return 0;
    }

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int dem = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            dem++;
            cout << "Vi tri " << i << " -> " << a[i] << endl;
        }
    }

    cout << "So dinh trong mang = " << dem << endl;

    return 0;
}
