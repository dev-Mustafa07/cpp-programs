#include <iostream>
#include <string>
using namespace std;

int main()
{
    float temperature[7] = {};
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for (int i = 0; i < 7; i++)
    {
            cout << "Enter the temperature in Celsius of " << days[i] << ": ";
            cin >> temperature[i];
    }
    float highest = temperature[0];
    float lowest = temperature[0];
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
    if (highest > 50){
        cout << "\nTemperature is too high\n1.Drink Cold water\n2.Stay hydrated\n3.Stay in shaded or air-conditioned areas when possible.\n4.Limit outdoor activity during peak heat; Especially between 11AM to 4PM\n";
    }
    cout << "\nThe Lowest Temperature of the week was: " << lowest << "C";
    if (lowest < 0){
        cout << "\nTemperature is too cold\n1.Wear multiple layers of clothing instead of one thick layer.\n2.Use heaters safely and ensure proper ventilation.\n3.Consume balanced meals and warm drinks.\n4.Wash your hands regularly.\n";
    }
    cout << "\n==================================================";

    return 0;
}