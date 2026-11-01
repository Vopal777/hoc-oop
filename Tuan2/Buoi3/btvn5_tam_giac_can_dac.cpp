#include <iostream>
using namespace std;

int main()
{
    int h;
    cout << "Nhap h (h >= 3): " << endl;
    cin >> h;
    while (h < 3)
    {
        cout << "h phai >= 3. Nhap lai: " << endl;
        cin >> h;
    }

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}