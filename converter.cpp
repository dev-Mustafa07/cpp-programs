#include <iostream>
using namespace std;

int main()
{
    int decimalno, rem;
    int binary[32] = {};
    int i = 0;
    cout << "Enter your Decimal number to convert it into binary number: ";
    cin >> decimalno;
    while (decimalno > 0)
    {
        binary[i] = decimalno % 2;
        decimalno = decimalno / 2;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        cout << binary[j];
    }
    return 0;
}