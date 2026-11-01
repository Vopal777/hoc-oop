#include <iostream>
using namespace std;
 
int main(){
    int tien = 0, km;
    cout<<"Nhap so km: ";
    cin>> km;
    if (km <= 1)
        tien = km * 15000;
    else if (km <= 5)
        tien = 15000 + (km - 1) * 13500 ;
    else 
        tien = 15000 + 5 * 13500 + (km - 5) * 11000;
        
    if (km > 30)
        tien = tien - (tien * 0.1);
    cout<<"Tong tien: "<< tien;
    return 0;
}
// 2km = 15000 + 13500 *1 
// 3km = 15000 + 13500 *2 
// 4km = 15000 + 13500 *3 
// 6km = 15000 + 13500 *5 + 11000 = 93.500
// 7km = 15000 + 13500 *5 + 11000 *2 
// 31km = 15000 + 13500 *5 + 11000 * 26 =368.500 - 36800= 331650.