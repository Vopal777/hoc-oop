#include <iostream>
#include <String>

using namespace std;
struct Hs
// ten, tuoi, mssv
{
    string ten;
    int tuoi;
    string mssv;
};

int main()
{
    Hs sv1 = {"Nguyen Van A", 18,"01234342"};
    cout << sv1.ten << " " << sv1.tuoi << " " << sv1.mssv << endl;
    Hs sv2 = {"Nguyen Van B", 20,"8978979798"};
    cout << sv2.ten << " " << sv2.tuoi << " " << sv2.mssv << endl;
    return 0;
}