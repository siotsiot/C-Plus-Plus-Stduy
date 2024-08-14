#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;

    cout << "첫번째 피연산자를 입력하시오: ";
    cin >> a;

    cout << "두번째 피연산자를 입력하시오: ";
    cin >> b;

    cout << a << "+" << b << "은 " << a + b << endl;
    cout << a << "-" << b << "은 " << a - b << endl;
    cout << a << "*" << b << "은 " << a * b << endl;
    cout << a << "/" << b << "은 " << a / b << endl;
    cout << a << "%" << b << "은 " << a % b << endl;
    
	return 0;
}
