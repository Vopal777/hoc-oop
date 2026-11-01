// Nhập 1 số nguyên , in Bảng Cửu Chương trong khoảng (1-9)
#include <iostream>
using namespace std;
// Nhập k
int inBangCuuChuong()
{
    int k;
    cout << "Nhập số bất kì k từ (1-9)" << endl;
    cin >> k;
    if (k > 10)
    {
        cout << "Số vượt ngoài BCC" << endl;
        return 0;
    }
    for (int i = 1; i <= 10; i++)
    {
        cout << k << " x " << i << " = " << k * i << endl;
    }
    return 1;
}

int main()
{

    inBangCuuChuong();
    return 0;
}
