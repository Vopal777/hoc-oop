#include <iostream>

using namespace std;

/*
// cách 1: truyền chiếu
void thaydoi(int &x)
{
    cout << "Địa chỉ của x : " << &x << endl;
    x+= 10;
    cout << "Giá trị của x : " << x << endl;
}

int main(){
    int x = 10;
    cout << "Địa chỉ của x: " << &x << endl;
    thaydoi(x);
    cout << "Giá trị của x sau khi thay đổi: " << x << endl;
    return 0;
}
*/


// cách 2: con trỏ  
// con trỏ thì lưu địa chỉ
void thaydoi(int *x){
    cout << "Địa chỉ của x : " << x << endl;
    *(x)+= 10;
    cout << "Giá trị của x : " << *x << endl;
}

int main(){
    int x = 10;
    cout << "Địa chỉ của x: " << &x << endl;
    thaydoi(&x);
    cout << "Giá trị của x sau khi thay đổi: " << x << endl;
    return 0;
}