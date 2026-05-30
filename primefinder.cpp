#include <iostream>
using namespace std;

int main()
{
    char ch;
    do
    {
        int num;
        cout << "Please! Enter number to print all the prime numbers of your number: ";
        cin >> num;
        // THIS WILL PRINT THE PRIME NUMBER
        for (int j = 2; j <= num; j++)
        {
            int isprime = true;
            for (int i = 2; i < j; i++)
            {
                if (j % i == 0)
                {
                    isprime = false;
                    break;
                }
            }
            if (isprime)
            {
                cout << j << endl;
            }
        }
        cout << "Do you want to continue a Program?(y/n)";
        cin >> ch;
    }while(ch ==  'y' || ch ==  'Y');
    cout << "===============================================\n";
    cout << "\n\n\tThank you to use our program\n";
    cout << "\tDeveloper - Muhammad Mustafa\n";
    cout << "===============================================";
    return 0 ;
}