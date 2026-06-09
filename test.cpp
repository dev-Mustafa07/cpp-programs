#include <iostream>
using namespace std;

int main()
{
    int num = 6;
    int nums[] = {50, 2, 300, 4, 1, -60};
    int smallest = 0;
    int largest = 0;
    int small = 0;
    int large = 0;

    for (int i = 0; i < num; i++)
    {
        if (smallest > nums[i])
        {
            smallest = nums[i];
            small = i;
        }

        if (largest < nums[i])
        {
            largest = nums[i];
            large = i;
        }
    }
    cout << "Smallest No is: " << smallest << endl;
    cout << "Largest No is: " << largest << endl;
    cout << "Smallest No " << smallest << " found at: " << small << endl;
    cout << "Largest No " << largest << " found at: " << large << endl;
    return 0;
}