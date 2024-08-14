#include <iostream>
using namespace std;

int main()
{
    double distance, minutes, seconds, hours, velocity;

    cout << "달린 거리를 입력하시오(km): ";
    cin >> distance;

    cout << "달린 시간 중에서 분을 입력하시오: ";
    cin >> minutes;

    cout << "달린 시간 중에서 초를 입력하시오: ";
    cin >> seconds;

    hours = minutes / 60 + seconds / 3600;
    velocity = distance / hours;

    cout << "평균 속도는 " << velocity << "km/h입니다." << endl;
    
	return 0;
}
