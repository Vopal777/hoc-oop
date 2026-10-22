// Đề bài: Nhập hai số nguyên a và b (b >= 0), tính a^b bằng vòng lặp for.
#include <iostream> // Cho phép chương trình nhập và in dữ liệu.
using namespace std; // Để viết cin, cout mà không cần thêm std::.

int main() // Hàm main là nơi chương trình bắt đầu chạy.
{
    int a, b; // Khai báo hai biến số nguyên a và b.
    int ketQua = 1; // Bắt đầu kết quả bằng 1; a^0 cũng bằng 1.

    cout << "Nhap a va b (b >= 0): "; // In lời nhắc nhập hai số.
    cin >> a >> b; // Đọc giá trị a và b từ bàn phím.

    for (int i = 0; i < b; i++) // Lặp b lần, với i chạy từ 0 đến b - 1.
    {
        ketQua = ketQua * a; // Mỗi lần lặp, nhân kết quả hiện tại với a.
    }

    cout << a << "^" << b << " = " << ketQua << endl; // In lũy thừa và kết quả.
    return 0; // Kết thúc chương trình.
}