#include <iostream>
#include <vector>
using namespace std;

void converter(long long int dec)
{
    long long binaryreserverr = dec;
    vector<int> binaryNum;
    while (dec > 0)
    {
        int num;
        num = dec % 2;
        binaryNum.push_back(num);
        dec = dec / 2;
    }
    cout << "\n\nYour decimal number: " << binaryreserverr << " is "
         << "\n-------------------------------\n\t";
    for (int j = binaryNum.size() - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    cout << endl
         << " in binary" << "\n-------------------------------";

    { // Greetings
        cout << "\n===============================================\n";
        cout << "\n\n\tThank you to use our program\n";
        cout << "\tDeveloper - Muhammad Mustafa\n";
        cout << "===============================================";
    }
}

int main()
{

    long long int dec;
    { // Headings
        cout << "====================================================\n";
        cout << "\tConverter Decimal to Binary number\n";
        cout << "====================================================\n";
    }
    cout << "Enter your number: ";
    cin >> dec;
    converter(dec);

    return 0;
}