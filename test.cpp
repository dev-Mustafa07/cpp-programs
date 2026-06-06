#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nums = 4;
    int bin[nums] = {1, 10, 11, 100};
    for (int j = 0; j < nums; j++)
    {
        int exp = 0;
        
        int arrayno, singleno = 0, ans = 0;
        arrayno = bin[j];
        while (arrayno > 0)
        {
            // cout << "\n start of while loop \n";
            singleno = arrayno % 10;
            singleno = singleno * pow(2, exp);
            arrayno /= 10;
            exp++;
            
            ans = singleno + ans;
            // cout << "\n End of while loop \n";
        }
        cout << ans;
        cout << "\t";
    }
    return 0;
}