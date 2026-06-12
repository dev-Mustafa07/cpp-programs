#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;
    char choice;
    int sum = 0;
    int num;
    do{
        cout << "Enter you number: ";
        cin >> num;
        vec.push_back(num);
        sum = sum + num;
        cout << "Do You want add more number?";
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    cout << "Sum is " << sum;
}