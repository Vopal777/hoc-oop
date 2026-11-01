// Đề bài: Nhập mảng và một số nguyên X. Đếm xem có bao nhiêu phần tử
// mảng giá trị lớn hơn X, sau đó in danh sách các phần tử đó ra màn hình.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    int X;
    int dem = 0;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Nhap X: ";
    cin >> X;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > X)
        {
            dem++;
        }
    }

    cout << "Danh sach cac phan tu lon hon X: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > X)
        {
            cout << "Vị trí: " << i << " -> " << a[i] << endl;
        }
    }
    cout << endl;

    cout << "So phan tu lon hon X: " << dem << endl;
    return 0;
}
