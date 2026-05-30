#include <iostream>
using namespace std;

int main()
{
    // THIS PROGRAM WILL TELL YOU WHETHER INUPUTED NUMBER IS PRIME OR NOT!
    int no;
    char choice;
    do
    {
        bool isprime = true;
        cout << "Please! Enter no to check whether it is prime or not: ";
        cin >> no;
        for (int i = 2; i < no; i++)
        {
            if (no % i == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << no << " Number is prime\n";
        }
        else
        {
            cout << no << " Number is not prime\n";
        }
        cout << "Do you want to enter more numbers to check whether it is prime or not(y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "===============================================\n";
    cout << "\n\n\tThank you to use our program\n";
    cout << "\tDeveloper - Muhammad Mustafa\n";
    cout << "===============================================";
}