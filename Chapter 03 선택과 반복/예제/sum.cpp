#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
        sum += i; // sum = sum + i;와 같음

    cout << "1부터 10까지의 정수의 합 = " << sum << endl;

    return 0;
}
