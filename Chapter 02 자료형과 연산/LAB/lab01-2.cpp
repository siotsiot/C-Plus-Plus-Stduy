#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int f_temp = 60;
    int c_temp;

    c_temp = (5 / 9.0) * (f_temp - 32);
    cout << "섭씨온도는 " << c_temp << "도입니다.\n";
    
	return 0;
}
