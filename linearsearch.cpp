#include <iostream>
using namespace std;

int linearsearch(int arr[], int target)
{
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == target)
        {
            cout << "Found at: ";
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {0, 2, 4, 6, 8, 10};
    int target = 10;
    cout << linearsearch(arr, target);
    return 0;
}