#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout.setf(ios_base::fixed);
    
    float fvalue = 1234567890.12345678901234567890;
    double dvalue = 1234567890.12345678901234567890;
    cout << "float형 변수 = " << fvalue << endl;
    cout << "double형 변수 = " << dvalue << endl;
    
    return 0;
}
