// Bài 14: Sao chép các số chẵn sang mảng mới
// Đề bài: Khai báo thêm mảng b. Duyệt mảng a, phần tử nào là số chẵn thì đưa vào mảng b.
// In mảng b và số lượng phần tử của mảng b.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[100], b[100];
    cout << "Nhap mang a: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int dem = 0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] % 2 == 0) 
        {
            b[dem] = a[i];
            dem++;
        }
    }

    cout << "Mang b chua cac so chan: ";
    for (int i = 0; i < dem; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    cout << "So luong phan tu trong mang b: " << dem << endl;

    return 0;
}
