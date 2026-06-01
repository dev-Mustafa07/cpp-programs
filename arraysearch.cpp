#include <iostream>
using namespace std;

int main()
{
    int userno;
    bool checker;
    int rollNo[10] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    cout << "Please enter your Roll no: ";
    cin >> userno;
    //  num = 10;
    for (int i = 0; i < 10; i++)
    {
        if (userno == rollNo[i])
        {
            checker = true;
            break;
            // cout << userno << " - You are already enrolled!\n";
        }
        else
        {
            // cout << userno << " - You aren't enrolled!\n";
            checker = false;
        }
        // cout << checker << endl;
    }
    if (checker)
    {
        cout << userno << " - You are already enrolled!\n";
    }
    else
    {
        cout << userno << " - You aren't enrolled!\n";
    }
    cout << "===============================================\n";
    cout << "\n\n\tThank you to use our program\n";
    cout << "\tDeveloper - Muhammad Mustafa\n";
    cout << "===============================================";
    return 0;
}