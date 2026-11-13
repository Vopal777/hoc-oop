// Bài 13: Biến đổi giá trị theo vị trí index
// Đề bài:
// - Phần tử ở index chẵn: tăng lên 2 đơn vị (a[i] = a[i] + 2).
// - Phần tử ở index lẻ: nhân đôi giá trị (a[i] = a[i] * 2).
// - In lại mảng sau khi cập nhật.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[100];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) 
    {
        if (a[i] % 2 == 0) 
        {
            a[i] = a[i] + 2;
        } 
        else 
        {
            a[i] = a[i] * 2;
        }
    }

    cout << "Mang sau khi bien doi: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
