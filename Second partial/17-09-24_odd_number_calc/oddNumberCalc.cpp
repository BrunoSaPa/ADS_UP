#include <iostream>

using namespace std;


int main(){
    int sum = 0;
    for(int i = 3; i<=33 ;i++){
        if((i%2)!=0){
            cout << "The number: " << i << " is odd\n";
            sum += i;
        }
    }
    cout << "The of the odd numbers from 3 to 33 is: " << sum;
}