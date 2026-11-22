#include <iostream>
using namespace std;

void func1(int &a)
{
	a = 5;
}

void func2(int *a)
{
	*a = 5;
}

int main()
{
    int *p;
	int a; 
	func1(a);
    cout << a << endl;
	func2(&a);
    cout << a << endl;
}