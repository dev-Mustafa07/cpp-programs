#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int ans;
    int num;
    int dec;
    int i = 0;
    int array[num];
    cout << "How many bits do you have for your binary number: ";
    cin >> num;
    cout << "Enter you binary number to convert that in Decimal number containing " << num << " bits: ";
    cin >> dec;
    // i = 0
    // array[4]
    // num = 4
    // dec = 1011
    while(dec > 0){
        dec = dec / 10;
        array[i] = dec;
        // 1.loop 
        //  dec = 101
        //  array[0] = 101
        dec = dec * pow(array[i], i);
        // dec = 0
        i++;
    }
    // cout << "\n-----\n";
    // cout << ans;
    // cout << "\n-----\n";

    for(int j = 0;j < num;j++){
        ans = array[j] + ans;
    }
    cout << ans;
    return 0;
}