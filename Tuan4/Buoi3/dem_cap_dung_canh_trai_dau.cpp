// Đề bài: Đếm số cặp phần tử đứng cạnh nhau trái dấu trong mảng.
// Hai phần tử trái dấu khi một số âm và số còn lại dương.
// Ví dụ: Mảng -2 5 7 -3 4 có 3 cặp trái dấu đứng cạnh nhau.

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

    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i] < 0 && a[i + 1] > 0) || (a[i] > 0 && a[i + 1] < 0))
        {
            dem++;
        }
    }

    cout << "So cap dung canh nhau trai dau: " << dem << endl;
    return 0;
}
