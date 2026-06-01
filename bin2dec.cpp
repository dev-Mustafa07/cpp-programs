#include<iostream>
using namespace std;

int main(){
    int num;
    // num = 4
    int array[num];
    int dec;
    // num = 1011
    int i = 0;
    cout << "How many bits do you have for your binary number: ";
    cin >> num;
    cout << "Enter you binary number to convert that in Decimal containing " << num << " bits: ";
    cin >> dec;
    while(dec > 0){
        dec = dec / 10;
        dec = dec * i;
        array[i] = dec;
        i++;
    }
    cout << dec;
    return 0;
}