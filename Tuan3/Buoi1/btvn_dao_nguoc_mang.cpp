/*
    De bai: Nhap so luong phan tu n (1 <= n <= 100) va mang gom n so nguyen.
    In ra mang theo thu tu ban dau va theo thu tu tu cuoi ve dau.

    Vi du:
    Input: n = 5, mang: 1 3 5 7 9
    Output:
    Xuoi: 1 3 5 7 9
    Nguoc: 9 7 5 3 1
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    cout << "Nhap n: " << endl;
    cin >> n;
    cout << "Mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // in mang dau
    cout << "Xuoi: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // in mang cuoi
    cout << "Nguoc: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
