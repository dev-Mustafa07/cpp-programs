#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int exp = 0;
    int bin[4] = {1, 10, 11, 100};
    for (int j = 0; j < 4; j++)
    {
        int dec[16] = {};
        int arrayno, singleno, ans;
        arrayno = bin[j];
        while (arrayno > 0)
        {
            // cout << "\n start of while loop \n";
            singleno = arrayno % 10;
            singleno = singleno * pow(2, exp);
            dec[j] = singleno;
            arrayno /= 10;
            exp++;
            // cout << "\n End of while loop \n";
        }
        for (int k = 0; k < 16; k++)
        {
            ans = dec[k] + ans;
            // cout << "\n End of for loop \n";
        }
        cout << ans;
        cout << "\t";
    }
    return 0;
}