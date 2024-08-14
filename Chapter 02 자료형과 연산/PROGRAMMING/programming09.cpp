#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "정수를 입력하시오: ";
    cin >> number;

    cout << number / 1000 << endl;
    number %= 1000;
    cout << number / 100 << endl;
    number %= 100;
    cout << number / 10 << endl;
    number %= 10;
    cout << number / 1 << endl;

	return 0;
}
