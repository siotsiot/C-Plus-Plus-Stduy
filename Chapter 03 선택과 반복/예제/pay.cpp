#include <iostream>
using namespace std;

int main()
{
    const int RATE = 5000;
    int pay; // 임금
    int hours; // 시간

    cout << "시간을 입력하시오: "; // 입력 안내 출력
    cin >> hours;

    if (hours > 8)
        pay = RATE * 8 + (int)(1.5 * RATE * (hours - 8));
    else
        pay = RATE * hours;
    cout << "임금은 " << pay << "입니다.\n";
    return 0;
}
