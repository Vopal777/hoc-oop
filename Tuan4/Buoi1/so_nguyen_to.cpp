#include <iostream>
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;

    }
    return true;
}

int main()
{
    int n;
  
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[100];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int dem= 0;
    cout << "Cac so nguyen to trong mang: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            cout << "Vị trí: " << i << " -> " << a[i] << endl;
        }
    }
    cout << endl;

    cout << "So luong so nguyen to: " << dem << endl;
    return 0;
}
