#include <iostream>
using namespace std;

int main()
{
    int a = 9, b = 11;
    cout << (a & b) << endl; // AND Bitewise Operator
    cout << (a | b) << endl; // OR  Bitewise Operator
    cout << (a ^ b) << endl; // (Exculsive OR) XOR  Bitewise Operator

    int c = 10, d = 2;
    cout << (c << d) << endl; // Left Shift Bitewise Operator
    cout << (c >> d) << endl; // Right Shift Bitewise Operator
    return 0;
}