#include <iostream>
using namespace std;

void nhanSatThuong(int &hp, int satThuong)
{
    hp -= satThuong;
    if (hp <= 0)
    {
        hp = 0;
    }
    else
    {
        cout << "Da can hp" << endl;
    }
}

void hoiMau(int &hp, int luongHoi, int maxHP)
{
    hp += luongHoi;
    if (hp > maxHP)
    {
        hp = maxHP;
    }
}

int main()
{
    int hp = 80;
    int maxHP = 100;
    int satThuong;
    int luongHoi = 0;
    int n = 1;
    int i;
    while (n == 1)
    {
        cout<< "Hp hien tai: " << hp << " / " << maxHP << endl;
        cout << "1. Sat thuong | 2. Hoi phuc" << endl;
        cin >> i;

        if (i == 1)
        {
        cout << "Nhap sat thuong don danh: " << endl;
        cin >> satThuong;
        nhanSatThuong(hp, satThuong);
        }


        else if (i == 2)
        {
        cout << "Nhap luong hp hoi phuc: " << endl;
        cin >> luongHoi; 
        hoiMau(hp, luongHoi, maxHP);
        }


        cout << "Hp nhan vat: " << hp << endl;

        cout << "Nhap 1 de tiep tuc: " << endl;
        cin >> n;
    }
    return 0;
}