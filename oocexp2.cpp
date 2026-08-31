#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void inputDetails() {
        cout << "Enter Name: ";
        getline(cin >> ws, name);

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "\n---- Student Details ----\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.inputDetails();
    s.displayDetails();

    return 0;
}