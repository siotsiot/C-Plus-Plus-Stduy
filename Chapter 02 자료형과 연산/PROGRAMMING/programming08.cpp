#include <iostream>
using namespace std;

int main()
{
    int hours, minutes, seconds;

    cout << "시간을 입력하세요: ";
    cin >> hours;

    cout << "분을 입력하세요: ";
    cin >> minutes;

    cout << "초 입력하세요: ";
    cin >> seconds;

    cout << hours << "시간 " << minutes << "분 " << seconds << "초는 " << hours * 3600 + minutes * 60 + seconds << "초입니다." << endl;

	return 0;
}
