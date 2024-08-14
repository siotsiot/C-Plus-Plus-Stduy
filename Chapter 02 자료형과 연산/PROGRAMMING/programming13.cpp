#include <iostream>
using namespace std;

int main()
{
    double Celsius, absolute_temperature;

    cout << "섭씨온도를 입력하시오: ";
    cin >> Celsius;

    absolute_temperature = Celsius + 273.16;

    cout << "절대온도는 " << absolute_temperature << "입니다." << endl;
    
	return 0;
}
