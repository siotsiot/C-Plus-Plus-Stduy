#include <iostream>
#include <climits>
using namespace std; // 이름 공간 설정

int main()
{
    short year = SHRT_MAX; // 최댓값으로 초기화한다.
    int sale = INT_MAX; // 최댓값으로 초기화한다.
    long total_sale = LONG_MAX; // 최댓값으로 초기화한다.
    
    cout << "short형의 크기 = " << sizeof(short) << endl;
    cout << "int형의 크기 = " << sizeof(int) << endl;
    cout << "long형의 크기 = " << sizeof(long) << endl << endl;
    
    cout << "short형의 최댓값 = " << year << endl;
    cout << "int형의 최댓값 = " << sale << endl;
    cout << "long형의 최댓값 = " << total_sale << endl << endl;
    
    cout << "short형의 최솟값 = " << SHRT_MIN << endl;
    cout << "int형의 최솟값 = " << INT_MIN << endl;
    cout << "long형의 최솟값 = " << LONG_MIN << endl << endl;
    
    return 0;
}
