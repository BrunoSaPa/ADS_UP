#include <iostream>
using namespace std;
#include <unordered_map>
#include <string>

void multiplications();

int main()
{
    char res;
    do
    {
        cout << "Enter an option in the menu\n1-Multiplications\ne- exit\n";
        cin >> res;
        switch (res)
        {
        case '1':
        multiplications();
            break;

        case 'e':
        case 'E':
            break;
        default:
            break;
        }
    } while (res != 'e' && res != 'E');
    return 0;
}

void multiplications(){
    int lowerLimit, upperLimit, x;

    cout << "Enter the number to multiply: ";
    cin >> x;

    cout << "Enter the lower limit of the multiplication: \n";
    cin >> lowerLimit;

    cout << "Enter the upper limit of the multiplication: \n";
    cin >> upperLimit;

    for(int i = lowerLimit; i < upperLimit + 1; i++){
        cout << x << " x " << i << " = " << x*i << "\n";
    }
};