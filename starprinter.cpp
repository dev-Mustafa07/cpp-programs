#include <iostream>
using namespace std;

int main()
{
    int num, userchoice;
    cout << "Please! Tell in whuch pattern you want to print star triangle\n";
    // FIRST CHOICE
    cout << "1. for\n";
    cout << "*   *   *   *\n";
    cout << "*   *   *\n";
    cout << "*   *\n";
    cout << "*\n";
    // SECOND CHOICE
    cout << "2. for\n";
    cout << "*\n";
    cout << "*   *\n";
    cout << "*   *   *\n";
    cout << "*   *   *   *\n";
    cout << "Enter number: ";
    cin >> userchoice;
    cout << "Please enter number to print the no of stars ow want to print: ";
    cin >> num;
    if (userchoice == 1)
    {
        for (int i = 0; i <= num; i++)
        {
            for (int j = num; j > i; j--)
            {
                cout << "*\t";
            }
            cout << endl;
        }
    }
    else if (userchoice == 2)
    {
        for (int i = 0; i <= num; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*\t";
            }
            cout << endl;
        }
    }
    return 0;
}