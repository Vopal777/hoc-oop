//Nhập 1 số n in ra từ n -> 1
#include <iostream>
using namespace std;
// Nhập n
void inRaSo_N()
{
    int n;
    cout<<"Nhập số bất kì n"<< endl;
    cin>> n;
    for (int i = n; i>=1; i--)
    {
            cout<<i<<endl;
    }
}

int main()
{
    inRaSo_N();
	return 0;
}
