#include <iostream>
using namespace std;

// Base Class
class Student
{
protected:
    string name;
    int rollNo;

public:
    void getStudentDetails()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudentDetails()
    {
        cout << "\nStudent Name: " << name;
        cout << "\nRoll Number: " << rollNo;
    }
};

// Derived Class 1
class StudentExam : public Student
{
protected:
    float marks1, marks2, marks3;

public:
    void getExamDetails()
    {
        cout << "\nEnter marks for Subject 1: ";
        cin >> marks1;

        cout << "Enter marks for Subject 2: ";
        cin >> marks2;

        cout << "Enter marks for Subject 3: ";
        cin >> marks3;
    }
};

// Derived Class 2
class StudentResult : public StudentExam
{
private:
    float total, percentage;

public:
    void calculateResult()
    {
        total = marks1 + marks2 + marks3;
        percentage = total / 3;
    }

    void displayResult()
    {
        displayStudentDetails();

        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";

        if (percentage >= 40)
            cout << "\nResult: Pass";
        else
            cout << "\nResult: Fail";
    }
};

int main()
{
    StudentResult s;

    s.getStudentDetails();
    s.getExamDetails();
    s.calculateResult();
    s.displayResult();

    return 0;
}