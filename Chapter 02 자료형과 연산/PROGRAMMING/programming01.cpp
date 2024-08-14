#include <iostream>
using namespace std;

int main()
{
	int length, width, height;

	cout << "상자의 길이를 입력하세요: ";
	cin >> length;

	cout << "상자의 너비를 입력하세요: ";
	cin >> width;

	cout << "상자의 높이를 입력하세요: ";
	cin >> height;

	cout << "상자의 체적은 " << length * width * height << "입니다." << endl;

	return 0;
}
