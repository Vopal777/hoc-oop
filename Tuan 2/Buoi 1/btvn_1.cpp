// Tính tổng \(S = 1 - 2 + 3 - 4 + 5 - ... + (-1)^{n+1}n\)
#include <iostream>
using namespace std;

int tinhTong()
{
    int n;
    int sum = 0;
    int dau = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << "S = ";
        else if (dau == 1)
            cout << " + ";
        else
        {
            cout << " - ";
        }
        cout << i;
        sum += dau * i;
        dau = dau * -1;
    }
    cout << " = " << sum << endl;
    return sum;
}

int main()
{
    int c;
    c = tinhTong();
    cout << "Ket qua: " << c << endl;
    return 0;
}