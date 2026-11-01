#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100];

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap cac phan tu: ";

  

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }

    cout << "So lon nhat: " << max << endl;
    cout << "So nho nhat: " << min << endl;
    return 0;
}
