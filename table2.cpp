#include <iostream>
using namespace std;

int main()
{
    // THIS WILL PRINT 1-10 TABLE
    int ans = 1;
    for (int j = 1; j <= 10; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            ans = i * j;
            cout << j << " x " << i << " = " << ans << endl;
        }
        cout << endl;
    }
}