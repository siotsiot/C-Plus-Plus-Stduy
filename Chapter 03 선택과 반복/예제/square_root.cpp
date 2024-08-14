// break를 이용하여 무한 루프를 탈출한다.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double v;

    while (1)
    {
        cout << "실수값을 입력하시오: ";
        cin >> v;

        if (v < 0.0)
            break;

        cout << v << "의 제곱근은 " << sqrt(v) << "입니다.\n";
    }

    return 0;
}
