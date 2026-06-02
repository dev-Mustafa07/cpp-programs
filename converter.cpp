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
        rem = decimalno % 2;
        cout << rem;
        rem = binary[i];
        decimalno = decimalno / 2;
        i++;
    }
    cout << endl;
    // cout << "----------\n";
    //     cout << binary[0];
    //     cout << binary[1];
    //     cout << binary[3];
    //     cout << binary[4];
    //     cout << binary[5];
    //     cout << binary[6];
    // cout << "\n----------\n";
    for (int j = 0; j < i; j++)
    {
        cout << binary[j];
    }
    return 0;
}