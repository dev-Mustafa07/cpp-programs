#include <iostream>
using namespace std;

int main()
{
    int num = 4839;
    while (num > 0)
    {
        num = num / 10;
        cout << num << endl;
    }
    return 0;
}