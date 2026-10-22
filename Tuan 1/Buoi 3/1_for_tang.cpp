//NHập n in ra all chẵn từ
#include <iostream>
using namespace std;
// Nhập n
void inRaSoChan()
{
    int n;
    cout<<"Nhập số bất kì"<< endl;
    cin>> n;
    for (int i = 2; i<n; i+=2)
    {
        cout<<i<<endl;
    }
}

// void inRaSoChan()
// {
//     int n;
//     cout<<"Nhập số bất kì"<< endl;
//     cin>> n;
//     for (int i = 2; i<n; i++)
//     {
//         if(i % 2 == 0)
//             cout<<i<<endl;
//     }
// }

int main()
{
    inRaSoChan();
// 	for ( int i=2; ; i+=2)
// 	{
// 		if (i < 5)
// 		{
// 			cout<< i <<endl;
// 		}
// 		else
// 		{
// 		    cout<<"Stop";
// 		    break;
// 		}
// 	}
	return 0;
}
