// Nhập hai số nguyên a, b, với điều kiện a <= b.
// In ra các số chia hết cho 3 trong đoạn từ a đến b, đồng thời đếm số lượng.
// Nếu không tìm được số nào chia hết cho 3 thì in Khong co so nao.
#include <iostream>
using namespace std;
// Nhập a & b và đếm số lượng % 3
int chiaHet3()
{
    int a, b;
    cout << "Nhập số a & b bất kì" << endl;
    cin >> a;
    cin >> b;
    if (a>b)
    {
        cout<<"a không lớn hơn b"<< endl;
        return 0;
    }
    int dem = 0;
    cout << "Các số chia hết cho 3:  ";
    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0 && i > 0)
        {
            cout << i << "  ";
            dem++;
        }
    }

    if (dem == 0)
    {
        cout << "Không có số nào" << endl;
    }
    else
    {
        cout << "\nSo luong: " << dem;
    }
    return 1;
}

int main()
{
    int c;
    c = chiaHet3();
    return 0;
}