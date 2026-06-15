#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // THIS PROGRAM WAS DEVELOPED WITH THE HELP OF *GEMINI
    long long int dec;
    vector<int> binaryNum;
    int num;
    cout << "Enter your number: ";
    cin >> dec;
    while (dec > 0)
    {
        num = dec % 2;
        binaryNum.push_back(num);
        dec = dec / 2;
    }
    for (int j = binaryNum.size() - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    return 0;
}