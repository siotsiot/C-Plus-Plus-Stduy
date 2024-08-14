#include <iostream>
using namespace std;

int main()
{
    char op;
    int num1, num2;

    cout << "*************" << endl;
    cout << "+--Add" << endl;
    cout << "---Subtract" << endl;
    cout << "*--Multiply" << endl;
    cout << "/--Divide" << endl;
    cout << "Q--Quit" << endl;
    cout << "*************" << endl;

    while (1)
    {
        cout << "연산을 선택하시오: ";
        cin >> op;

        if (op == 'Q')
            break;
        
        switch (op)
        {
            case '+':
                cout << "두 수를 공백으로 분리하여 입력하시오: ";
                cin >> num1 >> num2;
                cout << num1 + num2 << endl;
                break;
            case '-':
                cout << "두 수를 공백으로 분리하여 입력하시오: ";
                cin >> num1 >> num2;
                cout << num1 - num2 << endl;
                break;
            case '*':
                cout << "두 수를 공백으로 분리하여 입력하시오: ";
                cin >> num1 >> num2;
                cout << num1 * num2 << endl;
                break;
            case '/':
                cout << "두 수를 공백으로 분리하여 입력하시오: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << num1 / num2 << endl;
                else
                    cout << "0으로 나눌 수 없습니다." << endl;
                break;
            default:
                cout << "잘못 입력하셨습니다." << endl;
                break;
        }
    }

    return 0;
}
