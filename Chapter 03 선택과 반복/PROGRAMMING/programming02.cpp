#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, min;

    cout << "첫 번째 정수를 입력하시오: ";
    cin >> num1;
    cout << "두 번째 정수를 입력하시오: ";
    cin >> num2;
    cout << "세 번째 정수를 입력하시오: ";
    cin >> num3;

    if (num1 < num2)
    {
        if (num1 < num3)
            min = num1;
        else
            min = num3;
    }
    else
    {
        if (num2 < num3)
            min = num2;
        else
            min = num3;
    }
    
    cout << "가장 작은 값은 " << min << endl;

    return 0;
}
