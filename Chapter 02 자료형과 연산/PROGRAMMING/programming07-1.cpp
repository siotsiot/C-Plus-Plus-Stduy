#include <iostream>
using namespace std;

int main()
{
	const double INCH = 2.54;
	const double FEET = 12 * INCH;

    double height;

    cout << "키를 입력하시오: ";
    cin >> height;

    double heightInInches = height / INCH;

    int feet = (int)(heightInInches) / 12;
    int inches = (int)(heightInInches) % 12;

    cout << height << "cm는 " << feet << "피트 " << inches << "인치입니다." << endl;

	return 0;
}
