#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    double x1, x2;

    cout << "a를 입력하시오: ";
    cin >> a;

    cout << "b를 입력하시오: ";
    cin >> b;

    cout << "c를 입력하시오: ";
    cin >> c;

    x1 = (- b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (- b - sqrt(b * b - 4 * a * c)) / (2 * a);
    
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    
	return 0;
}
