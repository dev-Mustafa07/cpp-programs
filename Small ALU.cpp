#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nums;
    int finans = 1;
    int f = 0;
    int choice;
    cout << "Please enter how many binary numbers do you have? ";
    cin >> nums;
    int bin[nums] = {}; // Store all binary numbers
    int dec[nums] = {}; // Store all decimal numbers that user input

    do
    {
        cout << "Enter you binary number: ";
        cin >> bin[f];
        f++;
    } while (f < nums);

    {
        cout << "Which Operation You want to apply on these binary number?\n";
        cout << "1. for Addtion(+)\n";
        cout << "2. for Sutraction(-)\n";
        cout << "3. for Division(/)\n";
        cout << "4. for Multipication(x)\n";
        cout << "Enter your choice: ";
    }
    cin >> choice;

    if (choice == 1) // Addition
    {
        finans = 0;
        for (int j = 0; j < nums; j++)
        {
            int exp = 0;

            int arrayno, singleno = 0, ans = 0;
            arrayno = bin[j];
            while (arrayno > 0)
            {
                singleno = arrayno % 10;
                singleno = singleno * pow(2, exp);
                arrayno /= 10;
                exp++;

                ans = singleno + ans;
            }
            dec[j] = ans;
        }

        for (int l = 0; l < nums; l++)
        {
            finans += dec[l];
        }
        int finbins[32] = {};
        int p = 0;
        while (finans > 0)
        {
            finbins[p] = finans % 2;
            finans /= 2;
            p++;
        }
        for (int g = p - 1; g >= 0; g--)
        {
            cout << finbins[g];
        }
    }
    else if (choice == 2) // Subtraction
    {
        for (int j = 0; j < nums; j++) // Converting binary no in decimal
        {
            int exp = 0;

            int arrayno, singleno = 0, ans = 0;
            arrayno = bin[j];
            while (arrayno > 0)
            {
                singleno = arrayno % 10;
                singleno = singleno * pow(2, exp);
                arrayno /= 10;
                exp++;

                ans = singleno + ans;
            }
            cout << "\n*" << ans << "*\n";
            dec[j] = ans; // Storing converted decimal no in decimalarray
        }
        int l;
        finans = dec[0];
        for ( l = 1; l < nums; l++)
        {
            // Performing actual calculation - + * /
            finans = finans - dec[l];
            cout << "\n{" << finans << "}\n";
        } 
        cout << "\n[" << l << "]\n";
        if (finans < 0) // Making number +ve
        {
            // Converting in +ve if answer is coming in -ve
            finans *= -1;
            cout << "-";
        }
        int finbins[32] = {}; // Store actual final binary bits
        int p = 0;
        while (finans > 0) // Converting Binary no into Decimal no
        {
            finbins[p] = finans % 2;
            finans /= 2;
            p++;
        }
        for (int g = p - 1; g >= 0; g--)
        {
            cout << finbins[g];
        }
    }
    else if (choice == 3) // Division
    {
        for (int j = 0; j < nums; j++)
        {
            int exp = 0;

            int arrayno, singleno = 0, ans = 0;
            arrayno = bin[j];
            while (arrayno > 0)
            {
                // Converting binary no into decimal no
                singleno = arrayno % 10;
                singleno = singleno * pow(2, exp);
                arrayno /= 10;
                exp++;

                ans = singleno + ans;
            }
            dec[j] = ans; // Storing Decimal no into dec[] array
            cout << "\n(" << dec[j] << ")";

        }

        double  finans = dec[0]; 
        for (int l = 1; l < nums; l++)
        {
            // Performing division /  
            finans = finans / dec[l];
            cout << "\n{" << finans << "}";
        }

        if (finans < 0)
        {
            finans *= -1;
            cout << "-";
        }
        int finbins[32] = {};
        int p = 0;
        while (finans > 0)
        {
            // Convert final decimal no into binary number.
            finbins[p] = fmod(finans , 2);
            finans /= 2;
            p++;
        }
        for (int g = p - 1; g >= 0; g--)
        {
            cout << finbins[g];
        }
    }
    else if (choice == 4) // Multipication
    {
        for (int j = 0; j < nums; j++)
        {
            int exp = 0;

            int arrayno, singleno = 0, ans = 0;
            arrayno = bin[j];
            while (arrayno > 0)
            {
                singleno = arrayno % 10;
                singleno = singleno * pow(2, exp);
                arrayno /= 10;
                exp++;

                ans = singleno + ans;
            }
            dec[j] = ans;
        }
        finans = dec[0];
        for (int l = 1; l < nums; l++)
        {
            finans *= dec[l];
        }
        int finbins[32] = {};
        int p = 0;
        while (finans > 0)
        {
            finbins[p] = finans % 2;
            finans /= 2;
            p++;
        }
        for (int g = p - 1; g >= 0; g--)
        {
            cout << finbins[g];
        }
    }
    return 0;
}