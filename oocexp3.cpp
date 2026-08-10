#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    // Constructor
    Complex(int real = 0, int imag = 0)
    {
        a = real;
        b = imag;
    }

    // Addition
    Complex add(Complex c)
    {
        return Complex(a + c.a, b + c.b);
    }

    // Subtraction
    Complex subtract(Complex c)
    {
        return Complex(a - c.a, b - c.b);
    }

    // Display
    void display()
    {
        if (b >= 0)
            cout << a << " + " << b << "i" << endl;
        else
            cout << a << " - " << -b << "i" << endl;
    }
};

int main()
{
    Complex c1(6, 7);
    Complex c2(5, 8);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex sum = c1.add(c2);
    Complex difference = c1.subtract(c2);

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    return 0;
}