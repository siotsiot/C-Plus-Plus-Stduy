#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float grade, sum = 0.0, average;
    int count = 0;

    while (1)
    {
        cout << "학생 성적을 입력하시오: ";
        cin >> grade; // 정수도 받을 수 있다.

        if (grade < 0.0) // 음수가 입력되면
            break; // 반복을 빠져나간다.

        count++;
        sum += grade;
    }

    average = sum / count;
    cout << "학생들의 성적의 평균은 " << average << "입니다.\n";

    return 0;
}
