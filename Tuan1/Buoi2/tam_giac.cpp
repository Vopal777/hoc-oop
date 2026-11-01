#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double a, b, c;
    cout<<"Nhap canh a: ";
    cin>> a;
    cout<<"Nhap canh b: ";
    cin>> b;
    cout<<"Nhap canh c: ";
    cin>> c;
    
    
    if ((a > 0 && b > 0 && c > 0) && (a + b > c) && (b + c > a) && (a + c > b))
    {    
        cout<<"La tam giac"<< endl;
        
        
        // Tinh chu vi & dien tich
        double chuVi = a + b + c;
        double p = chuVi / 2.0; // Nua chu vi
        double dienTich = sqrt(p * (p - a) * (p - b) * (p - c)); // Ct Heron

        cout << "Chu vi = " << chuVi << endl;
        cout << "Dien tich = " << dienTich << endl;
        
        // Xac dinh tam giac gi?
        if (a == b && b == c && a == c)
            cout<<"Tam giac deu"<<endl;
        // else if ((a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) && (a == b || b==c|| c==a))
        //     cout<<"Tam giac vuong can"<<endl;
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            cout<<"Tam giac vuong"<<endl;
        else if (a == b || b==c || c==a)
            cout<<"Tam giac can"<<endl;
        else
            cout<<"Tam giac thuong"<<endl;
    }
    else
        cout<<"Khong phai tam giac"<< endl;
    return 0;
}
