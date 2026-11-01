#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int a[100];
    int tongLe = 0;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Tinh tong so le
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
             tongLe += a[i];
        else
            cout << "Khong co so le" << endl;
    }

    cout << "Tong Le = "<< tongLe << endl;

    return 0;
}