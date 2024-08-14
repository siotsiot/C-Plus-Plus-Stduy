#include <iostream>
using namespace std;

int main()
{
    int start_point, end_point, fuel;

    cout << "출발한 지점의 주행 거리계: ";
    cin >> start_point;

    cout << "도착한 지점의 주행 거리계: ";
    cin >> end_point;

    cout << "사용한 연료: ";
    cin >> fuel;

    cout << "연비는 " << (end_point - start_point) / fuel << "km/l입니다." << endl;
    
	return 0;
}
