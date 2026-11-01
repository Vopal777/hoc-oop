// Đề bài: Nhập hai số L, R (L <= R). Liệt kê và đếm số lượng các phần tử
// thỏa mãn điều kiện L <= a[i] <= R.

#include <iostream>
using namespace std;

int main() {
    int a[100];
    int L, R, n;
    int dem = 0;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Nhap L va R: ";
    cin >> L >> R;

    cout << "Cac phan tu trong doan [" << L << ", " << R << "]: ";
    for (int i = 0; i < n; i++) {
        if (a[i] >= L && a[i] <= R) {
            cout << a[i] << " ";
            dem++;
        }
    }
    cout << endl;

    cout << "So luong phan tu thoa man: " << dem << endl;
    return 0;
}
