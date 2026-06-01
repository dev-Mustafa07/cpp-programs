#include <iostream>
#include <string>
using namespace std;

int main()
{
    float temperature[7] = {};
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursaday", "Friday", "Saturday", "Sunday"};
    for (int i = 0; i < 7; i++)
    {
        if (i == 0)
        {
            cout << "Enter the temperature in Celsius of " << days[i] << ": ";
            cin >> temperature[i];
        }
        else if (i == 1)
        {
            cout << "Enter the temperature in Celsius of " << days[i] << ": ";
            cin >> temperature[i];
        }
        else if (i == 2)
        {
            cout << "Enter the temperature in Celsius of " << days[i] << ": ";
            cin >> temperature[i];
        }
        else if (i == 3)
        {
            cout << "Enter the temperature in Celsius of " << days[i] << ": ";
            cin >> temperature[i];
        }
        else if (i == 4)
        {
            cout << "Enter the temperature in Celsius of " << days[i] << ": ";
            cin >> temperature[i];
        }
        else if (i == 5)
        {
            cout << "Enter the temperature in Celsius of " << days[i] << ": ";
            cin >> temperature[i];
        }
        else if (i == 6)
        {
            cout << "Enter the temperature in Celsius of " << days[i] << ": ";
            cin >> temperature[i];
        }
    }
    int highest = temperature[0];
    int lowest = temperature[0];
    for (int j = 0; j < 7; j++)
    {
        if (temperature[j] > highest)
        {
            highest = temperature[j];
        }

        if (temperature[j] < lowest)
        {
            lowest = temperature[j];
        }
    }
    cout << "\nDaily temperatures recorded successfully!\n";
    cout << "==================================================\n";
    cout << "The Highest Temperature of the week was: " << highest << "C";
    cout << "\nThe Lowest Temperature of the week was: " << lowest << "C";
    cout << "\n==================================================";

    return 0;
}