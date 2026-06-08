#include <iostream>
#include <cmath>
using namespace std;

void binarytodecimal(int binarynums[], int decimalnums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int num = binarynums[i];
        int ans, finans = 0;
        int exp = 0;
        while (num > 0)
        {
            // Converting Binary into decimal;
            ans = num % 10;
            ans = ans * pow(2, exp);
            finans = finans + ans;
            num = num / 10;
            exp++;
        }
        decimalnums[i] = finans;
        cout << "(" << finans << ")";
    }
    cout << endl;
}

void divider(int decimalnums[], int &finans, int size)
{
    int ans = decimalnums[0];
    for (int i = 1; i < size; i++)
    {
        ans = ans / decimalnums[i];
    }
    finans = ans;
}

void decimaltobinary(int finans, int a[])
{
    int num = finans;
    int ans;
    int i = 0;
    cout << num << endl;
    while (num > 0)
    {
        a[i] = num % 2;
        num = num / 2;
        i++;
    }
    cout << num;
    int size = sizeof(a) / sizeof(a[0]);
    for (int i = 2; i > 0; i--){
        cout << "[" << a[i] << "]";

    }
}

int main()
{
    int binarynums[] = {101000, 1010, 10};
    int size = sizeof(binarynums) / sizeof(binarynums[0]);
    int decimalnums[3] = {};
    int finans = 0;
    int ans[] = {};

    binarytodecimal(binarynums, decimalnums, size);

    divider(decimalnums, finans, size);

    cout << "{" << finans << "}\n";

    decimaltobinary(finans, ans);

    // for (int i = 8; i > 0; i--){
    //     cout << ans[i] << endl;
    // }
    return 0;
}