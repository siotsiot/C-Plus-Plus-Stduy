#include <iostream>
using namespace std;

int main()
{
	double computer_introduction, c_programming, English, general_math, average;

	cout << "컴퓨터 개론 과목의 점수를 입력하시오: ";
	cin >> computer_introduction;

	cout << "C언어 프로그래밍 과목의 점수를 입력하시오: ";
	cin >> c_programming;

	cout << "영어 과목의 점수를 입력하시오: ";
	cin >> English;

	cout << "일반 수학 과목의 점수를 입력하시오: ";
	cin >> general_math;

	average = (computer_introduction + c_programming + English + general_math) / 4;

	cout << "평균 점수는 " << average << "점 입니다." << endl;

	return 0;
}
