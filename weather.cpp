#include <iostream>
using namespace std;

int main()
{
    float temperature[7] = {};
    int highest = temperature[0];
    int lowest = temperature[0];
    for (int i = 0; i < 7; i++)
    {
        if (i == 0)
        {
            cout << "Enter the temperature in Celsius of Monday: ";
            cin >> temperature[i];
            if (temperature[0] > highest)
            {
                highest = temperature[0];
            }
            
            if (temperature[0] < lowest)
            {
                lowest = temperature[0];
            }
        }
        else if (i == 1)
        {
            cout << "Enter the temperature in Celsius of Tuesday: ";
            cin >> temperature[i];
            if (temperature[1] > highest)
            {
                highest = temperature[1];
            }
            if (temperature[1] < lowest)
            {
                lowest = temperature[1];
            }
        }
        else if (i == 2)
        {
            cout << "Enter the temperature in Celsius of Wednesday: ";
            cin >> temperature[i];
            if (temperature[2] > highest)
            {
                highest = temperature[2];
            }
            if (temperature[2] < lowest)
            {
                lowest = temperature[2];
            }
        }
        else if (i == 3)
        {
            cout << "Enter the temperature in Celsius of Thursday: ";
            cin >> temperature[i];
            if (temperature[3] > highest)
            {
                highest = temperature[3];
            }
            
            if (temperature[3] < lowest)
            {
                lowest = temperature[3];
            }
        }
        else if (i == 4)
        {
            cout << "Enter the temperature in Celsius of Friday: ";
            cin >> temperature[i];
            if (temperature[4] > highest)
            {
                highest = temperature[4];
            }
            
            if (temperature[4] < lowest)
            {
                lowest = temperature[4];
            }
        }
        else if (i == 5)
        {
            cout << "Enter the temperature in Celsius of Saturday: ";
            cin >> temperature[i];
            if (temperature[5] > highest)
            {
                highest = temperature[5];
            }
            if (temperature[5] < lowest)
            {
                lowest = temperature[5];
            }

        }
        else if (i == 6)
        {
            cout << "Enter the temperature in Celsius of sunday: ";
            cin >> temperature[i];
            if (temperature[6] > highest)
            {
                highest = temperature[6];
            }
            if (temperature[6] < lowest)
            {
                lowest = temperature[6];
            }
        }
    }
    cout << "\nDaily temperatures recorded successfully!\n";
    cout << "==================================================\n";
    cout << "The Highest Temperature of the week was: " << highest << "C";
    cout << "\nThe Lowest Temperature of the week was: " << lowest << "C";
    cout << "\n==================================================";

    return 0;
}