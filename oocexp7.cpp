#include <iostream>
#include <string>
using namespace std;

class Product
{
    int productID;
    string name;
    float price;

public:

    // Default Constructor
    Product()
    {
        productID = 0;
        name = "Not Assigned";
        price = 0;
    }

    // Parameterized Constructor
    Product(int id, string n, float p)
    {
        productID = id;
        name = n;
        price = p;
    }

    // Copy Constructor
    Product(Product &p)
    {
        productID = p.productID;
        name = p.name;
        price = p.price;
    }

    // Display Function
    void display()
    {
        cout << "\nProduct ID: " << productID;
        cout << "\nProduct Name: " << name;
        cout << "\nProduct Price: " << price << endl;
    }
};

int main()
{
    // Default Constructor
    Product p1;

    // Parameterized Constructor
    Product p2(101, "Laptop", 50000);

    // Copy Constructor
    Product p3(p2);

    cout << "Product 1:";
    p1.display();

    cout << "\nProduct 2:";
    p2.display();

    cout << "\nProduct 3 (Copy of Product 2):";
    p3.display();

    return 0;
}