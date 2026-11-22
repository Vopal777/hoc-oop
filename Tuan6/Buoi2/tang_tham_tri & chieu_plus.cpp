#include <iostream>
using namespace std;

// hàm ví dụ tăng tham trị
void tangThamTri(int x)
{
    x = x + 10;
    cout << "Trong ham tang tham tri: x = " << x << endl;
}

// hàm ví dụ tăng tham chiếu( biến)
void tangThamChieu(int &x)
{
    x = x + 10;
    cout << "Trong ham tang tham chieu: x = " << x << endl;
}

int main()
{
    // test tham trị
    int a = 5;
    tangThamTri(10);
    cout << a << endl;
    tangThamTri(a + 5);
    cout << a << endl;
    
    // tangThamChieu(10);
    // tangThamChieu(a + 5);

    // tangThamTri(a);
    // cout << a << endl;

    // // test tham chiếu
    // tangThamChieu(a);
    // cout << a << endl;

    

    return 0;
}