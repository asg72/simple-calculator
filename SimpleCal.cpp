#include <iostream>
#include <string>
using namespace std;

void subtract(int a, int b)
{
    cout << "The sum of a and b is: " << a - b << endl;
}

void sum(int a, int b)
{
    cout << "The value of " << a << " + " << b << " is " << a + b << endl;
}

void multiply(int a, int b)
{
    cout << "The value of " << a << " * " << b << " is " << a * b << endl;
}

void divide(int a, int b)
{
    if (b!=0)
    {
        cout<<"The value of " << a << " / " << b << " is " << a / b << endl;
    }
    else
    {
        cout<<"Error; Wanna escape the matrix? ";
    }
    
    
}

int main()
{
    int x, y;
    string oper;
    cout << "Enter a and b value: " << endl;
    cin >> x >> y;

    cout << "Select an operator(+, -, *, /): ";
    cin >> oper;

    if (oper == "+")
    {
        sum(x, y);
    }
    else if (oper == "-")
    {
        subtract(x, y);
    }
    else if (oper == "*")
    {
        multiply(x, y);
    }
    else if (oper == "/")
    {
        divide(x, y);
    }
    else
    {
        cout << "Error: Operator not recognized :(";
    }
    

    return 0;
}