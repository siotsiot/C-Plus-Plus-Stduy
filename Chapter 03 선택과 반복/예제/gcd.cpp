#include <iostream>
using namespace std;

int main()
{
    int x, y, r;
    cout << "두 개의 정수를 입력하시오(큰 수, 작은 수): ";
    cin >> x;
    cin >> y;

    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    cout << "최대 공약수는 " << x << "입니다.\n";

    return 0;
}
