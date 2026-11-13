#include <iostream>
using namespace std;
struct HinhChuNhat
{
    double dai;
    double rong;
};

// void tinhHCn(double dai, double rong)
// {
//     double chuVi = 0;
//     double dienTich = 0;
//     chuVi = (dai + rong) * 2;
//     dienTich = dai * rong;
//     cout << "Chu vi: " << chuVi << endl;
//     cout << "Dien tich: " << dienTich << endl;
// }

int main()
{
    
    double chuVi = 0;
    double dienTich = 0;
    
    HinhChuNhat h;
    cout << "Dai: ";
    cin >> h.dai;
    cout << "Rong: ";
    cin >> h.rong;

    chuVi = (h.dai + h.rong) * 2;
    dienTich = h.dai * h.rong;
    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;
    // tinhHCn(h.dai, h.rong);
    return 0;
}