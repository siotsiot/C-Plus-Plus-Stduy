#include <iostream>
using namespace std;

int main()
{
	const double LB = 2.2;
	const double OZ = 16.0;

	double weight;

	cout << "무게를 입력하시오: ";
	cin >> weight;

	cout << weight << "킬로그램은 " << LB * weight << "파운드입니다." << endl;
	cout << weight << "킬로그램은 " << LB * OZ * weight << "온스입니다." << endl;

	return 0;
}
