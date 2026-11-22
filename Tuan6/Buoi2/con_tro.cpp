/*
    toán tử lấy địa chỉ &
    toán tử lấy giá trị *
    
*/  

#include <iostream>
using namespace std;

int main() {
    int x = 10 ;
    int* pointer;
    pointer = &x;
    //In ra giá trị và địa chỉ của biến x
    cout << "Giá trị của x: " << x << endl;
    cout << "Giá trị của x thông qua con trỏ: " << *pointer << endl;
    cout << "Địa chỉ của x: " << &x << endl;

    //In ra giá trị và địa chỉ của biến con trỏ pointer
    cout << "Giá trị của pointer: " << pointer << endl;
    cout << "Địa chỉ của pointer: " << &pointer << endl;
}