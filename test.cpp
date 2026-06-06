#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nums;
    bool stats = true;
    cout << "Please enter how many binary numbers do you have? ";
    cin >> nums;
    int finans = 1;
    int f = 0;
    int choice;
    int bin[nums] = {}; // Store all binary numbers
    int dec[nums] = {}; // Store all decimal numbers that user input
    do
    {
        cout << "Enter you binary number: ";
        cin >> bin[f];
        f++;
    } while (f < nums);
    

    cout << "Which Operation You want to apply on these binary number?\n";
    cout << "1. for Addtion(+)\n";
    cout << "2. for Sutraction(-)\n";
    cout << "3. for Dividion(/)\n";
    cout << "4. for Multipication(x)\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    if(choice == 2 && nums > 2){
        stats = false;
        cout << "cntrun";

    }else if(choice == 3 && nums > 2){
        stats = false;
        cout << "cntrun";
    }

    if (choice == 1 && stats)
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
    else if (choice == 2 && stats)
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

        for (int l = 0; l < nums; l++)
        {
            finans -= dec[l];
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
    else if (choice == 3 && stats)
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

        for (int l = 0; l < nums; l++)
        {
            finans /= dec[l];
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
    else if (choice == 4 && stats)
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

        for (int l = 0; l < nums; l++)
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