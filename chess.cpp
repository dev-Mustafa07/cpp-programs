#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please enter number to print chess square: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
    return 0;
}