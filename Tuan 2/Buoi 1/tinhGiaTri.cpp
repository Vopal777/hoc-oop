// Tính giá trị của n
#include <iostream>
using namespace std;
// Nhập n
int tinhGiaTri()
{
    int n;
    cout << "Nhập số n bất kì: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}

int main()
{
    int c;
    c = tinhGiaTri();
    return 0;
}
