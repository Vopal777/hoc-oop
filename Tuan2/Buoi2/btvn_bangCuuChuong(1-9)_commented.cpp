#include <iostream>
using namespace std;

/*
    Đề bài: Không cần nhập từ bàn phím.
    Yêu cầu: Dùng 2 vòng lặp for để in ra các bảng cửu chương từ 2 đến 9, phân cách rõ ràng từng bảng.
*/

int main()
{
    for (int i = 2; i <= 9; i++)
    {
        cout << "Bang cuu chuong " << i << endl;
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << "---------------------" << endl << endl;
    }

    return 0;
}
