#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:

    // Default Constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // Parameterized Constructor
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    // Copy Constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    // Function to calculate area
    float calculateArea()
    {
        return length * breadth;
    }

    // Function to display area
    void displayArea()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main()
{
    // Default Constructor
    Rectangle r1;

    // Parameterized Constructor
    Rectangle r2(10, 5);

    // Copy Constructor
    Rectangle r3(r2);

    cout << "Rectangle 1:" << endl;
    r1.displayArea();

    cout << "\nRectangle 2:" << endl;
    r2.displayArea();

    cout << "\nRectangle 3 (Copy of Rectangle 2):" << endl;
    r3.displayArea();

    return 0;
}