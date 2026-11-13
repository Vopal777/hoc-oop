/*
    Đề bài:
    1. Khai báo struct ToaDo gồm hai số nguyên x và y.
    2. Trong hàm main(), tạo biến ToaDo p.
    3. Gán p.x = 4 và p.y = 7.
    4. In ra màn hình: Toa do: (4, 7).
*/

#include <iostream>
using namespace std;

struct ToaDo
{
    int x;
    int y;
};

int main()
{
    // cách 1
    ToaDo p;
    p.x = 4;
    p.y = 7;

    cout << p.x << ", " << p.y << endl;
    return 0;
}
