#include <iostream>
using namespace std;

//hàm ví dụ truyền tham trị
void ThamTri(int a) {
    a = 100;
    cout << "a trong ham tham tri la: " << a << endl;
}

//hàm ví dụ truyền tham chiếu( biến)
void ThamChieu(int &a) {
    a = 100;
    cout << "a trong ham tham tri la: " << a << endl;
}


int main()
{
    //test tham trị
    //int a = 1;
    //cout << "a truoc khi goi ham tham tri la: " << a << endl;
    ////gọi hàm

    //ThamTri(a);

    ////sau khi gọi hàm
    //cout << "a sau khi goi ham tham tri la: " << a << endl;

    //2.
    //test tham chiếu
    int a = 1;
    cout << "a truoc khi goi ham tham tri la: " << a << endl;
    //gọi hàm

    ThamChieu(a);

    //sau khi gọi hàm
    cout << "a sau khi goi ham tham tri la: " << a << endl;

}