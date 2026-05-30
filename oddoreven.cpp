#include<iostream>
using namespace std;

int main(){
    // THIS PROGRAM WILL TELL YOU WHETHER INUPUTED NUMBER IS ODD OR EVEN!
    for (int i = 0; i <= 50; i++)
    {
        if(i % 2 == 0){
            cout << i << " is even number" << endl;
        }
        else{
             cout <<"                      "<<  i << " is odd number" << endl;
        }
    }
    return 0;
}