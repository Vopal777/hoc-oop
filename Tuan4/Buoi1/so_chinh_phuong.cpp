// Đề bài: Viết hàm bool isSquare(int x) (số chính phương là số không âm có căn bậc 2 là số nguyên: 0, 1, 4, 9, 16, ...).
// Tính trung bình cộng của các số chính phương đứng tại các vị trí index lẻ (i = 1, 3, 5, ...).
// Nếu không có, in thông báo không tìm thấy.

#include <iostream>
#include <cmath>

using namespace std;

bool isSquare(int x)
{
    // Số âm không thể là số chính phương.
    if (x < 0)
        return false;

    int y = sqrt(x);
    if (y * y == x)
        return true;
    else
        return false;
}

int main()
{
    int n;

    cout << "Nhap so phan tu: ";
    cin >> n;
    
    if (n < 1 || n > 100)
    {
        cout << "So phan tu khong hop le!" << endl;
        return 0;
    }

    long long tong = 0;
    int dem = 0;
    double trungBinh;
    int a[100];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Chỉ duyệt các vị trí lẻ: 1, 3, 5, ...
    for (int i = 1; i < n; i += 2)
    {
        if (isSquare(a[i]))
        {
            cout << "Vị trí: " << i << " -> " << a[i] << endl;
            // Cộng số chính phương vào tổng và tăng số lượng để tính trung bình.
            tong += a[i];
            dem++;
        }
    }

    // Không có số chính phương ở vị trí lẻ thì không thể tính trung bình.
    if (dem == 0)
    {
        cout << "Khong tim thay so chinh phuong o vi tri le." << endl;
    }
    else
    {
        // Trung bình cộng = tổng các số tìm được / số lượng số tìm được.
        trungBinh = tong * 1.0 / dem;
        cout << "TBC = " << trungBinh << endl;
    }

    return 0;
}
