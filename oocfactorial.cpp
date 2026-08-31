#include <iostream>
using namespace std;

class Factorial
{
    int n;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void fact(Factorial obj)
    {
        int f = 1;

        for (int i = 1; i <= obj.n; i++)
        {
            f = f * i;
        }

        cout << "Factorial = " << f << endl;
    }
};

int main()
{
    Factorial obj;

    obj.input();
    obj.fact(obj);

    return 0;
}