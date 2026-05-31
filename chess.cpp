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
            cout << "*\t";
        }
        cout << endl;
    }
    return 0;
}