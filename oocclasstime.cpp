#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void input()
    {
        cout << "Enter hours: ";
        cin >> hour;

        cout << "Enter minutes: ";
        cin >> minute;

        cout << "Enter seconds: ";
        cin >> second;
    }

    void display()
    {
        cout << hour << " : " << minute << " : " << second << endl;
    }

    Time add(Time t)
    {
        Time temp;

        temp.second = second + t.second;
        temp.minute = minute + t.minute;
        temp.hour = hour + t.hour;

        if (temp.second >= 60)
        {
            temp.second -= 60;
            temp.minute++;
        }

        if (temp.minute >= 60)
        {
            temp.minute -= 60;
            temp.hour++;
        }

        return temp;
    }
};

int main()
{
    Time t1, t2, result;

    cout << "Enter first time:\n";
    t1.input();

    cout << "\nEnter second time:\n";
    t2.input();

    result = t1.add(t2);

    cout << "\nTotal Time = ";
    result.display();

    return 0;
}
