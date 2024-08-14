#include <iostream>
using namespace std;

int main()
{
    char input_char;

    cout << "문자를 입력하시오: ";
    cin >> input_char;

    switch (input_char)
    {
        case '\t':
            cout << "탭 문자입니다." << endl;
            break;
        case '\n':
            cout << "줄바꿈 문자입니다." << endl;
            break;
        case '\b':
            cout << "백스페이스 문자입니다." << endl;
            break;
        default:
            cout << "탭, 줄바꿈, 백스페이스 문자가 아닙니다." << endl;
            break;
    }

    return 0;
}
