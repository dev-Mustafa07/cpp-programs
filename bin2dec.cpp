#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int ans;
    int num;
    int dec;
    int i = 0;
    cout << "How many bits do you have for your binary number: ";
    cin >> num;
    int array[num];
    cout << "Enter you binary number to convert that in Decimal number containing " << num << " bits: ";
    cin >> dec;
    while(dec > 0){
        dec = dec % 10;
        array[i] = dec;
        dec = dec * pow(array[i], i);
        dec = dec / 10;
        i++;
    }

    for(int j = 0;j < num;j++){
        ans = array[j] + ans;
    }
    cout << ans;
    return 0;
}