#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    cout << "첫번째 숫자를 입력하시오: ";
    cin >> a;

    cout << "두번째 숫자를 입력하시오: ";
    cin >> b;

    cout << "최댓값: " << ((a > b) ? a : b) << endl;
    cout << "최솟값: " << ((a < b) ? a : b) << endl;
    cout << "절댓값: " << ((a > 0) ? a : -a) << ", " << ((b > 0) ? b : -b) << endl;

    return 0;
}
