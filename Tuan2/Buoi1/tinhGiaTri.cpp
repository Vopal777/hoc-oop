// Tính giá trị
#include <iostream>
using namespace std;
// Nhập n
double tinhGiaTri()
{
    int n;
    cout << "Nhập số n bất kì: " << endl;
    cin >> n;
    double sum = 0;
    for (double i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    return sum;
}

int main()
{
    double c;
    c = tinhGiaTri();
    cout << "Kết quả: " << c << endl;
    return 0;
}
