#include <iostream>
using namespace std;

int Hcn()
{
    int m, n;
    cout << "Nhap m & n: ";
    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            cout << "* ";
            
        }
        cout << " "<< endl;
    }
    return 0;
}

int main()
{
    Hcn();
    return 0;
}