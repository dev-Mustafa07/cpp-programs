#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char choice;
    int dec[32] = {};
    int i = 0;
    do
    {
        // Taking input of Binary numbers from user.
        if (i == 0)
        {
            cout << "Please Enter the " << i << " number: ";
            cin >> dec[i];
        }
        else if (i == 1)
        {
            cout << "Please Enter the " << i << "st number: ";
            cin >> dec[i];
        }
        else if (i == 2)
        {
            cout << "Please Enter the " << i << "nd number: ";
            cin >> dec[i];
        }
        else if (i == 3)
        {
            cout << "Please Enter the " << i << "rd number: ";
            cin >> dec[i];
        }
        else
        {
            cout << "Please Enter the " << i << "th number: ";
            cin >> dec[i];
        }
        cout << "Do you want to enter more numbers to add? (y/n): ";
        cin >> choice;
        i++;
    } while (choice == 'y' || choice == 'Y');

    // Converting to decimal(0-9) numbers to add.
    int binary[32] = {};
    for (int j = 0; j < i; j++)
    {
        int num, no;
        num = dec[j];
        while (num > 0)
        {
            // Converting  Binary to decimal
            no = num % 10;
            no = no * pow(2, j);
            no = binary[j];
        }
    }

    // for (int k = 0; k < i; k++)
    // {
    //    cout << binary[j]
    // }

    return 0;
}