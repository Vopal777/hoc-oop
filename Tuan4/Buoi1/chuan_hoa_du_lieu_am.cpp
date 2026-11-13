// Bài 12: Chuẩn hóa dữ liệu âm (Gán về 0)
// Đề bài: Duyệt mảng, nếu gặp phần tử có giá trị âm (a[i] < 0) thì gán lại thành số 0.
// In lại mảng sau khi biến đổi.
// Ví dụ: Mảng ban đầu 4 -3 7 -1 -> Mảng sau khi biến đổi: 4 0 7 0.

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

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) 
        {
            a[i] = 0;
        }
    }

    cout << "Mang sau khi doi: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
