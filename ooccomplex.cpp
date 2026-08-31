#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex sub(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    result = c1.add(c2);
    cout << "\nAddition = ";
    result.display();

    result = c1.sub(c2);
    cout << "Subtraction = ";
    result.display();

    return 0;
}