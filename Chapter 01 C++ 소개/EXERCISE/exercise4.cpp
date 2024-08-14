#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "당신의 이름을 입력하시오: ";
    cin >> s;
    cout << s << "씨 환영합니다.\n";
    cout << "무엇을 해드릴까요? ";
    cin >> s;
    cout << s << "는 할 수 없습니다.\n";
    return 0;
}
