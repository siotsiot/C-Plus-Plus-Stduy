#include <iostream>
using namespace std; // 이름 공간 설정

int main()
{
    const int MONTHS = 12; // 기호 상수 선언
    double m_salary, y_salary; // 변수 선언
    
    cout << "월급을 입력하시오: "; // 입력 안내문
    cin >> m_salary;
    
    y_salary = MONTHS * m_salary; // 순수입 계산
    cout << "연봉은 " << y_salary << "입니다." << endl;
    
    return 0;
}
