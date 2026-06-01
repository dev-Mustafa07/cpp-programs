#include <iostream>
using namespace std;

int main()
{
    int userno;
    char userchoice;
    bool checker;
    int rollNo[10] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    cout << "===============================================\n";
    cout << "\n\n\tWELCOME TO HARVARD UNIVESITY\n\n";
    cout << "===============================================\n";
    do
    {
        cout << "\nPlease enter your Roll no: ";
        cin >> userno;
        //  num = 10;
        for (int i = 0; i < 10; i++)
        {
            if (userno == rollNo[i])
            {
                checker = true;
                break;
            }
            else
            {
                checker = false;
            }
        }
        if (checker)
        {
            cout << userno << " - You are already enrolled!\n";
        }
        else
        {
            cout << userno << " - You aren't enrolled!\n";
        }
        cout << "Do you want to continue a program(y/n): ";
        cin >> userchoice;
    } while (userchoice == 'y' || userchoice == 'Y');
    cout << "\n===============================================\n";
    cout << "\n\tThank you to use our program\n";
    cout << "\tDeveloper - Muhammad Mustafa\n";
    cout << "===============================================";
    return 0;
}