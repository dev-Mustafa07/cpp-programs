#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // char choice;
    int i = 4;
    int dec[i] = {1, 10, 11, 100};
    // do
    // {
    //     // Taking input of Binary numbers from user.
    //     if (i == 0)
    //     {
    //         cout << "Please Enter the " << i << " number: ";
    //         cin >> dec[i];
    //     }
    //     else if (i == 1)
    //     {
    //         cout << "Please Enter the " << i << "st number: ";
    //         cin >> dec[i];
    //     }
    //     else if (i == 2)
    //     {
    //         cout << "Please Enter the " << i << "nd number: ";
    //         cin >> dec[i];
    //     }
    //     else if (i == 3)
    //     {
    //         cout << "Please Enter the " << i << "rd number: ";
    //         cin >> dec[i];
    //     }
    //     else
    //     {
    //         cout << "Please Enter the " << i << "th number: ";
    //         cin >> dec[i];
    //     }
    //     cout << "Do you want to enter more numbers to add? (y/n): ";
    //     cin >> choice;
    //     i++;
    // } while (choice == 'y' || choice == 'Y');

    // Converting to decimal(0-9) numbers to add.

    for (int j = 0; j < i; j++)
    {
        int num = dec[j];
        int no, ans;
        int binary[32] = {};
        while (num > 0)
        {

            no = num % 10;
            binary[j] = no * pow(2, j);
        }
    }

    // for (int k = 0; k < i; k++)
    // {
    //    cout << dec[k];
    // }

    return 0;
}