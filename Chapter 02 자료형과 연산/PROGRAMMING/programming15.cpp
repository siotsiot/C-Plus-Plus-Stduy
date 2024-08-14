#include <iostream>
using namespace std;

int main()
{
    double radius, A, V;

    cout << "반지름을 입력하시오: ";
    cin >> radius;

    A = 4 * 3.14 * radius * radius;
    V = (4 / 3) * 3.14 * radius * radius * radius;

    cout << "구의 표면적은 " << A << "입니다." << endl;
    cout << "구의 체적은 " << V << "입니다." << endl;
    
	return 0;
}
