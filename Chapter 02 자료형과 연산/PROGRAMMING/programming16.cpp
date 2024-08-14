#include <iostream>
using namespace std;

int main()
{
    double AC, AE, BC;

    cout << "AC를 입력하시오: ";
    cin >> AC;

    cout << "AE를 입력하시오: ";
    cin >> AE;

    cout << "BC를 입력하시오: ";
    cin >> BC;

    cout << "피라미드의 높이는 " << AE * BC / AC << "입니다." << endl;
    
	return 0;
}
