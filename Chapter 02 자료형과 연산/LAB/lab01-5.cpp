#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double f_temp, c_temp;

    cout << "섭씨온도를 입력하시오: ";
    cin >> c_temp;

    f_temp = (c_temp * 9.0 / 5.0) + 32;
    cout << "화씨온도는 " << f_temp << "도입니다.\n";
    
	return 0;
}
