#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char choice;
    vector<int> nums;
    do
    {
        int tempnum;
        cout << "Enter your number: ";
        cin >> tempnum;
        nums.push_back(tempnum);
        cout << "Do you want to add more number(y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    int n = 0;
    for (int v : nums)
    {
        n = n ^ v;
    }
    cout << n;
    return 0;
}