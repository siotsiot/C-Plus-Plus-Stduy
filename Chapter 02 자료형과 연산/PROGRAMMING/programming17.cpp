#include <iostream>
using namespace std;

int main()
{
    int x, y, quarterspace;

    cout << "x를 입력하시오: ";
    cin >> x;

    cout << "y를 입력하시오: ";
    cin >> y;

    quarterspace = x > 0 ? (y > 0 ? 1 : 4) : (y > 0 ? 2 : 3);

    cout << quarterspace << "사분면입니다." << endl;
    
	return 0;
}
