#include <iostream>
using namespace std;

int main()
{
    float temperature[7] = {};
    for (int i = 0; i < 7; i++)
    {
        if (i == 0)
        {
            cout << "Enter the temperature in Celsius of Monday: ";
            cin >> temperature[i];
        }
        else if (i == 1)
        {
            cout << "Enter the temperature in Celsius of Tuesday: ";
            cin >> temperature[i];
        }
        else if (i == 2)
        {
            cout << "Enter the temperature in Celsius of Wednesday: ";
            cin >> temperature[i];
        }
        else if (i == 3)
        {
            cout << "Enter the temperature in Celsius of Thursday: ";
            cin >> temperature[i];
        }
        else if (i == 4)
        {
            cout << "Enter the temperature in Celsius of Friday: ";
            cin >> temperature[i];
        }
        else if (i == 5)
        {
            cout << "Enter the temperature in Celsius of Saturday: ";
            cin >> temperature[i];
        }
        else if (i == 6)
        {
            cout << "Enter the temperature in Celsius of sunday: ";
            cin >> temperature[i];
        }
    }
    return 0;
}