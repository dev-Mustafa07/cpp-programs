#include <iostream>
using namespace std;

int main()
{
    // THIS WILL PRINT TABLE OF NUMBER THAT WAS INPUTED
    int table;
    cout << "PLEASE! Enter the number of that table: ";
    cin >> table;
    for (int i = 1; i <= 10; i++)
    {
        int ans = table;
        ans = ans * i;
        cout << table << " x " << i << " = " << ans << endl;
    }
}