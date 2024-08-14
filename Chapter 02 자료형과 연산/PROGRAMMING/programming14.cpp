#include <iostream>
using namespace std;

int main()
{
    int deposit;
    double interest, money;

    cout << "예금액을 입력하시오: ";
    cin >> deposit;

    cout << "연이율을 입력하시오(단위 퍼센트): ";
    cin >> interest;

    money = deposit * (1 + interest / 100) * (1 + interest / 100);

    cout << "2년 후의 예금액은 " << money << "입니다." << endl;
    
	return 0;
}
