#include <iostream>
using namespace std;

bool checkNumber(int num);

int main()
{
    int x;
    cout << "Enter a number";
    cin >> x;

    if (cin.fail())
    {
        cout << "Enter a valid number ";
    }
    else
    {
        if (x < 0)
        {
            cout << "Your number is negative ";
        }
        else if (x > 0)
        {
            cout << "Your number is positive ";
        }
        else
        {
            cout << "Your number is 0 ";
        }
    }
}


bool checkNumber(int num){
    
}