#include <iostream>

using namespace std;

// Tham so: parameters
// Doi so: argument

float avg(int arr[][3], int n, int m) // mảng 2 chiều
// float giaTriTrungBinh(int mang[], int n) // mảng 1 chiều
// float avg(int *arr, int n) //*arr -> con trỏ
{
    /*
    // mảng 1 chiều
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += mang[i];
    }
    return (float) sum / n;
    */

    // mảng 2 chiều 
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }

    return (float) sum / (n * m);
}

int main()
{
    /*
        int mang[10] = { 1, 2, 3, 4 }; // mảng 1 chiều
        cout << giaTriTrungBinh(mang, 4);
    */
    int numbers[2][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };

    cout << avg(numbers, 2, 3);
}
