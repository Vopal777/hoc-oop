// Đề bài: Nhập vị trí k (0 <= k < n), xóa phần tử tại chỉ số k.
// Ví dụ: Mảng 10, 20, 30, 40, 50; xóa vị trí k = 2 thì còn 10, 20, 40, 50.

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int a[100];

    cout << "Nhap so phan tu: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Nhap So phan tu: " << endl;
        return 0;
    }

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int dem = 0;
    cout << "Xoa vi tri k: " << endl;
    cin >> k;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == k)
        {
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        dem++;
    }
    cout << endl;
    // cout << "[" << a[i] << ", " << "]"<< endl;
    cout << "Kich thuoc moi: " << dem << endl;

    return 0;
}
