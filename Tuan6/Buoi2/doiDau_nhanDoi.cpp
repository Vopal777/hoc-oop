#include <iostream>
using namespace std;

void doiDauThamTri(int x)
{
    x = -x;
    // cout << "Trong ham doi dau tham tri: x = " << x << endl;
}

void doiDauThamChieu(int &x)
{
    x = -x;
    // cout << "Trong ham doi dau tham chieu: x = " << x << endl;
}

//////
void nhanDoiThamTri(double x)
{
    x = x * 2;
    // cout << "Trong ham nhan doi tham tri: x = " << x * 2 << endl;
}

void nhanDoiThamChieu(double &x)
{
    x = x * 2;
    // cout << "Trong ham nhan doi tham chieu: x = " << x * 2 << endl;
}
    int main()
    {
        int n = 7;
        double d = 3.5;
        doiDauThamTri(n);
        cout << "Trong ham doi dau tham tri: x = " <<  n << endl;
        
        doiDauThamChieu(n);
        cout << "Trong ham doi dau tham chieu: x = " << n << endl;

        nhanDoiThamTri(d);
        cout << "Trong ham nhan doi tham tri: x = " << d << endl;

        nhanDoiThamChieu(d);
        cout << "Trong ham nhan doi tham chieu: x = " << d << endl;

        return 0;
    }