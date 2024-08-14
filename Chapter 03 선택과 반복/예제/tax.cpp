#include <iostream>
using namespace std;

int main()
{
    int income; // 과세표준
    int tax; // 세금
    cout << "과세 표준 금액을 입력하시오: ";
    cin >> income;
    if (income <= 1000)
        tax = (int)(0.09 * income);
    else if (income <= 4000)
        tax = (int)(0.18 * income);
    else if (income < 8000)
        tax = (int)(0.27 * income);
    else
        tax = (int)(0.36 * income);
    cout << "소득세는 " << tax << "입니다.\n";
    return 0;
}
