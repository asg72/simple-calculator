#include <iostream>
using namespace std;

class SimpleCal
{
    int value1, value2;

public:
    void setVal(int x, int y)
    {
        value1 = x;
        value2 = y;
    }

    int calculate(char oper) const {
        switch (oper) {
        case '+': return value1 + value2;
        case '-': return value1 - value2;
        case '*': return value1 * value2;
        case '/':
            if (value2 != 0) return value1 / value2;
            else {
                cout << "Error: Division by zero is undefined." << endl;
                return 0;  // Return zero or handle error as needed
            }
        default:
            cout << "Error: Operator not recognized." << endl;
            return 0;
        }
    }
};

// Menu function to manage input and output
void menu()
{
    SimpleCal cal;
    char oper;
    int a, b;
    cout << "Enter value of a and b: " << endl;
    cin >> a >> b;

    cout << "Select an Operator(+, -, *, /) ";
    cin >> oper;
    cout << "You selected " << oper << endl;
    cal.setVal(a, b);
    int result = cal.calculate(oper);

    if (oper == '+' || oper == '-' || oper == '*' || (oper == '/' && b != 0))
    {
        cout << "The result of " << a << " " << oper << " " << b << " is " << result << endl;
    }
}

int main()
{
    char choice;
    do
    {
        menu();
        cout << "Do you want to perform another calculation? (y/n): " << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator!" << endl;

    return 0;
}
