#include <iostream>
using namespace std;

int main()
{
    char shape;
    int width, height, radius;

    cout << "R - 사각형" << endl;
    cout << "T - 삼각형" << endl;
    cout << "C - 원" << endl;
    cout << "도형을 선택하시오: ";
    cin >> shape;
        
    switch (shape)
    {
        case 'R':
            cout << "가로의 길이를 입력하시오: ";
            cin >> width;
            cout << "세로의 길이를 입력하시오: ";
            cin >> height;
            cout << width * height << endl;
            break;
        case 'T':
            cout << "밑변의 길이를 입력하시오: ";
            cin >> width;
            cout << "높이의 길이를 입력하시오: ";
            cin >> height;
            cout << width * height / 2 << endl;
            break;
        case 'C':
            cout << "반지름을 입력하시오: ";
            cin >> radius;
            cout << 2 * 3.14 * radius * radius << endl;
            break;
        default:
            cout << "잘못 입력하셨습니다." << endl;
            break;
    }

    return 0;
}
