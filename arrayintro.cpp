#include <iostream>
using namespace std;

int main()
{
    // This is my first [program] in which I used arrays in C++;
    int nums[5] = {5, 7, 5, 4, 1};
    for (int i = 0; i < 5; i++)
    {
        cout << &nums[i] << "\n";
    }
    cout << "===============================================\n";
    cout << "\n\n\tThank you to use our program\n";
    cout << "\tDeveloper - Muhammad Mustafa\n";
    cout << "===============================================";
    return 0;
}