#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end, int size)
{
    int j = size;
    for ( int i = 0; i < size; i++){
        swap(arr[i], arr[j]);
        j--;
    }
}

int main()
{
    int arry[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;
    int size = 9;
    int end = size - 1;
    reverse(arry, start, end, size);
    for(int i = 0; i < size; i++){
        cout << arry[i] << "\t";
    }
    return 0;
}