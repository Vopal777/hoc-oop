// Đề bài: Nhập số nguyên x. Kiểm tra x có trong mảng không:
// - Nếu có: in ra tất cả các vị trí index mà x xuất hiện và tổng số lần xuất hiện.
// - Nếu không: in ra thông báo "Khong tim thay x trong mang".
//
// Ví dụ:
// Input: n = 6, mảng: 3 8 5 8 2 8, x = 8
// Output: X xuat hien 3 lan tai cac index: 1 3 5

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    int x;
    int dem = 0;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Nhap x: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            dem++;
        }
    }

    if (dem == 0)
    {
        cout << "Khong tim thay x trong mang." << endl;
    }
    else
    {
        cout << "X xuat hien " << dem << " lan tai cac index: "<< endl;
        //in so mang dau
        cout <<"In số ở đầu: "<< a[0] << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                cout << i << " = " << a[i] << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
