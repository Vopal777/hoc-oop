#include <iostream>
using namespace std;

int Fibonacii()
{
    int a = 0;
    int b = 1; 
    int n;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << a << endl;
        int KetQua = a + b;
        a = b;
        b = KetQua;
    }
    return 0;
}

int main()
{
    Fibonacii();
    return 0;
}