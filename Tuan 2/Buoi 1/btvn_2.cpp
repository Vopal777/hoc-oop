// Tính giá trị a^b bằng vòng lặp for (nhân dồn b lần số a).
#include <iostream>
using namespace std;

void TinhLuyThua()
{
    int a;
    int b;
    int ketQua = 1;

    cout << "Nhap a va b: ";
    cin >> a >> b;

    for (int i = 0; i < b; i++)
    {
        ketQua *= a;
    }

    cout << a << "^" << b << " = " << ketQua << endl;
}

int main()
{
    TinhLuyThua();
    return 0;
}