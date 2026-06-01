#include <iostream>
using namespace std;

int main()
{
    int dec;
    int binaryNum[32];
    int i = 0;
    cout << "Enter your number: ";
    cin >> dec;
    while (dec > 0)
    {
        binaryNum[i] = dec % 2;
        dec /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    return 0;
}