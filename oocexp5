#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int employeeId;
    string name;
    float salary;

public:

    // Default Constructor
    Employee()
    {
        employeeId = 0;
        name = "Not Assigned";
        salary = 0;
    }

    // Parameterized Constructor
    Employee(int id, string n, float sal)
    {
        employeeId = id;
        name = n;
        salary = sal;
    }

    // Copy Constructor
    Employee(Employee &e)
    {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    // Display Function
    void display()
    {
        cout << "\nEmployee ID: " << employeeId;
        cout << "\nEmployee Name: " << name;
        cout << "\nEmployee Salary: " << salary << endl;
    }
};

int main()
{
    // Default constructor
    Employee e1;

    // Parameterized constructor
    Employee e2(101, "Rahul", 50000);

    // Copy constructor
    Employee e3(e2);

    cout << "\nDefault Constructor Employee:";
    e1.display();

    cout << "\nParameterized Constructor Employee:";
    e2.display();

    cout << "\nCopy Constructor Employee:";
    e3.display();

    return 0;
}