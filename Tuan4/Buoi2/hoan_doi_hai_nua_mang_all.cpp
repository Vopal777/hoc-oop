#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100];

    cout << "Nhap so phan tu: ";
    cin >> n;

    if (n < 2 || n > 100)
    {
        cout << "So phan tu phai la so chan tu 2 den 100!" << endl;
        return 0;
    }

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int nuaMang = n / 2;
    if (n % 2 == 0)
    {
        for (int i = 0; i < nuaMang; i++)
        {
            int c = a[i];
            a[i] = a[i + nuaMang];
            a[i + nuaMang] = c;
        }
    }
    else
    {
        for (int i = 0; i < nuaMang; i++)
        {
            int c = a[i];
            a[i] = a[i + nuaMang + 1];
            a[i + nuaMang + 1] = c;
        }
    }
        cout << "Mang sau khi hoan doi hai nua: ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        return 0;
    }