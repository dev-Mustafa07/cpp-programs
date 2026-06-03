#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ans = 0;
    int num, dec, c;
    int i = 0;
    cout << "====================================================\n";
    cout << "\tConverter Binary to Decimal number\n";
    cout << "====================================================\n";
    cout << "WARNING! PLEASE EXACT NUMBER OF DIGITS OF YOUR BINARY NUMBER OTHERWISE OUTPUT WILL NOT BE ACCURATE\n\n";
    cout << "How many bits do you have for your binary number: ";
    cin >> num;
    int array[num];
    cout << "Enter you binary number to convert that in Decimal number containing " << num << " bits: ";
    cin >> dec;
    int o = dec;
    while (dec > 0)
    {
        c = dec % 10;
        c = c * pow(2, i);
        array[i] = c;
        dec = dec / 10;
        i++;
    }

    for (int j = 0; j < num; j++)
    {
        ans = array[j] + ans;
    }
    cout << "\n\nYour binary number: " << o << " is ";
    cout << endl
         << "-------------------------------\n\t" << ans << " in decimal" << "\n-------------------------------";
    cout << "\n===============================================\n";
    cout << "\n\n\tThank you to use our program\n";
    cout << "\tDeveloper - Muhammad Mustafa\n";
    cout << "===============================================";
    return 0;
}