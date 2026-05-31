#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Please enter number: ";
    cin >> num;
    for(int i = 0; i <= num; i++){
        for (int j = 0; j < i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
    return 0;
}