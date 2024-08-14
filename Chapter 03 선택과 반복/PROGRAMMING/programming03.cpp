#include <iostream>
using namespace std;

int main()
{
    int binary, decimal = 0;
    int weight = 1;

    cout << "2진수를 입력하시오: ";
    cin >> binary;

    while (binary != 0)
    {
        if (binary % 10 == 1)
            decimal += weight;
        binary /= 10;
        weight *= 2;
    }
    cout << decimal;

    return 0;
}
