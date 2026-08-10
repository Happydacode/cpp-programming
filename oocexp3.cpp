#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Addition
    Complex add(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Subtraction
    Complex subtract(const Complex &c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    // Display
    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c1(6,7);
    Complex c2(5,8);

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