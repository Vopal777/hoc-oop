#include <iostream>
using namespace std;


void swapSai(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapDung(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 3, y = 9;
    swapSai(x, y);
    cout << "Swap sai: " << x << " - " << y << endl;

    swapDung(x, y);
    cout << "Swap dung: " << x << " - " << y << endl;
 
    return 0;
}