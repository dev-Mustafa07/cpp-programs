#include <iostream>
using namespace std;

void converter(int num){
    int binary[32] = {};
    int i = 0;
    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        cout << binary[j];
    }
}

int main()
{
    int decimalno;
    cout << "Enter your Decimal number to convert it into binary number: ";
    cin >> decimalno;
    converter(decimalno);
    return 0;
}