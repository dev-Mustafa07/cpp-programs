#include<iostream>
using namespace std;

int main(){
    int maxcap = 100;
    int currentcap = 0;
    float ratings[maxcap] = {};
    float ans = 0.0;
    char choice;
    do{
        cout << "Give us rating for HARVARD UNIVERSITY (1-10): ";
        cin >> ratings[currentcap];
        currentcap++;
        cout << "Do you want to give more rating? (y/n): ";
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    for (int i = 0; i < currentcap; i++){
        ans = ans + ratings[i];
    }
    ans = ans / currentcap;
    cout << "The rating is: " << ans;
    return 0;
}