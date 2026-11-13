// Đề bài: Kiểm tra trong mảng có chứa số 0 hay không.
// Nếu có, in ra vị trí xuất hiện đầu tiên của số 0 (vị trí bắt đầu từ 0).

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    int dem = 0; 

    cout << "Nhap so phan tu: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "So phan tu khong hop le: " << endl;
        return 0;
    }

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int viTri = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            viTri = i;
            break;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << "Vị trí: " << i << " -> " << a[i] << endl;
            dem++;
        }
        
    }
    
    if (viTri == -1)
    {
        cout << "Mang khong co so 0." << endl;
    }
    else
    {
        cout << "So 0 dau tien o vi tri: " << viTri << endl;
        cout << "Tong so 0 trong mang: " << dem << endl;
    }

    return 0;
}
