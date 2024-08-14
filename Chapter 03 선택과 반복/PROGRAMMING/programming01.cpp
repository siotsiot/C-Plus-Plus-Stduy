#include <iostream>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;

    cout << "첫 번째 점의 좌표를 입력하시오 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "두 번째 점의 좌표를 입력하시오 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "세 번째 점의 좌표를 입력하시오 (x3 y3): ";
    cin >> x3 >> y3;

    double area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    if (area == 0)
        cout << "이 세 점은 삼각형을 만들 수 없습니다." << endl;

    else
        cout << "이 세 점은 삼각형을 만들 수 있습니다." << endl;

    return 0;
}
