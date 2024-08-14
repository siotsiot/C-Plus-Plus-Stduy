#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double f_temp, c_temp;

    cout << "화씨온도를 입력하시오: ";
    cin >> f_temp;

    c_temp = (5.0 / 9.0) * (f_temp - 32.0);
    cout << "섭씨온도는 " << c_temp << "입니다.\n";
    
	return 0;
}
