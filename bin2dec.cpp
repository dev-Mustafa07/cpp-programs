#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void converter(long long int dec,long long int decimalreserverr)
{   
    cout << decimalreserverr;
    long long int ans = 0;
    int currentbit;
    int i = 0;
    vector<int> binary;
    while (dec > 0)
    {
        currentbit = dec % 10;
        currentbit = currentbit * pow(2, i);
        binary.push_back(currentbit);
        dec = dec / 10;
        i++;
    }

    int j;
    for (j = 0; j < binary.size(); j++)
    {
        ans = binary[j] + ans;
    }

    cout << "\n\nYour binary number: " << decimalreserverr << " is ";
    cout << endl
         << "-------------------------------\n\t" << ans << " in decimal" << "\n-------------------------------";
}

int main()
{
    {
        cout << "====================================================\n";
        cout << "\tConverter Binary to Decimal number\n";
        cout << "====================================================\n";
    }

    long long int dec;
    cout << "Enter you binary number to convert that in Decimal number: ";
    cin >> dec;
    long long int decimalreserver = dec;
    converter(dec, decimalreserver);
    {
        cout << "\n===============================================\n";
        cout << "\n\n\tThank you to use our program\n";
        cout << "\tDeveloper - Muhammad Mustafa\n";
        cout << "===============================================";
    }
    return 0;
}