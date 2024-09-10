#include <iostream>

using namespace std;

void leapYear();
void calculator();
void unitsConversionCalculator();

int main()
{
    char s;

    do
    {
        cout << "Select a program \n1- Calculator\n2- Leap year identifier\n3- Units converter\nS- Leave\n";
        cin >> s;
        switch (s)
        {
        case ('1'):
        {
            calculator();
            break;
        }
        case ('2'):
        {
            leapYear();
            break;
        }
        case ('3'):
        {
            unitsConversionCalculator();
            break;
        }

        default:
            cout << "Enter a valid case\n";
            break;
        }

    } while (s != 's' && s != 'S');
}

void calculator()
{
    // just a normal calc
    cout << "Calculator";
}

void leapYear()
{
    // a leap year cannot be divided by 100 and 400 at the same time
    cout << "Leap year";
}

void unitsConversionCalculator()
{
    // Farentheit to C and viceversa
    cout << "Units conversion";
}