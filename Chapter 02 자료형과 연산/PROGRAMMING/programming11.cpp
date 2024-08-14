#include <iostream>
using namespace std;

int main()
{
    int radius, height;
    double volume;

    cout << "원기둥 밑면의 반지름을 입력하시오: ";
    cin >> radius;

    cout << "원기둥의 높이를 입력하시오: ";
    cin >> height;

    volume = 3.14 * radius * radius * height;

    cout << "원기둥의 부피는 " << volume << "입니다." << endl;
    
	return 0;
}
