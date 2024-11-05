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

    void sum()
    {
        cout << "The value of " << value1 << " + " << value2 << " is " << value1 + value2 << endl;
    }
    void subtract()
    {
        cout << "The value of " << value1 << " - " << value2 << " is " << value1 - value2 << endl;
    }
    void multiply()
    {
        cout << "The value of " << value1 << " * " << value2 << " is " << value1 * value2 << endl;
    }
    void divide()
    {
        if (value2!=0)
        {
            cout << "The value of " << value1 << " / " << value2 << " is " << value1 / value2 << endl;
        }
        else
        {
            cout<<"Error: Division by zero is undefined."<<endl;
        }
    }
};

// Menu function to manage input and output
void menu()
{
    SimpleCal cal;
    string oper;
    int a, b;
    cout << "Enter value of a and b: " << endl;
    cin >> a >> b;

    cout << "Select an Operator(+, -, *, /) ";
    cin >> oper;
    cout << "You selected " << oper << endl;
    cal.setVal(a, b);

    if (oper == "+")
    {
        cal.sum();
    }
    else if (oper == "-")
    {
        cal.subtract();
    }
    else if (oper == "*")
    {
        cal.multiply();
    }
    else if (oper == "/")
    {
        cal.divide();
    }
    else
    {
        cout << "Error: Operator not recognized." << endl;
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