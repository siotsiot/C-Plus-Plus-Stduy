#include <iostream>
using namespace std;

int main()
{
    int month;
    int year = 2009;
    int days = 0;

    cout << "일수를 알고 싶은 달을 입력하시오: ";
    cin >> month;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0)) // 윤년
            days = 29;
        else
            days = 28;
    default:
        cout << "월이 잘못 입력되었습니다.";
        break;
    }
    cout << "월의 날수는 " << days << endl;

    return 0;
}
