#include <iostream>
using namespace std;

bool checkNumber(int num);
void checkIfNumberIsPositiveNegativeOrZero();
void oddOrEven();
void numberComparator();
void greaterOutOfThree();

int main()
{
    char res;
    do
    {
        cout << "Enter an option in the menu\n1-Odd or even number\n2-Negative, possitive or zero\n3-Number comparator\n4-Greater number out of 3 possibilities\ne- exit\n";
        cin >> res;
        switch (res)
        {
        case '1':
            oddOrEven();
            break;

        case '2':
            checkIfNumberIsPositiveNegativeOrZero();
            break;

        case '3':
            numberComparator();
            break;

        case '4':
            greaterOutOfThree();
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

void checkIfNumberIsPositiveNegativeOrZero()
{
    int x;
    do
    {
        cout << "Enter a number to check if it is possitive, negative or zero\n";
        cin >> x;
    } while (cin.fail());
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
    return;
}

void oddOrEven()
{
    int x;

    do
    {
        cout << "Enter a valid number to check if it is odd or even\n";
        cin >> x;
    } while (cin.fail());

    if (x % 2 == 0)
    {
        cout << "Your number even\n";
    }
    else if (x == 0)
    {
        cout << "Your number is 0\n";
    }
    else
    {

        cout << "Your number is odd \n";
    }
    return;
}

void numberComparator() {
    int x,y;

    do
    {
        cout << "Enter a valid number for x\n";
        cin >> x;
    } while (cin.fail());
    
    do
    {
        cout << "Enter a valid number for y\n";
        cin >> y;
    } while (cin.fail());

    if (x == y)
    {
        cout << "Your numbers are equal";
    }
    else if (x >= y)
    {
        cout << "x is greater than y";
    }
    else
    {

        cout << "y is greater than x";
    }
    return;
}

void greaterOutOfThree(){
    int x,y,z;

    do
    {
        cout << "Enter a valid number for x\n";
        cin >> x;
    } while (cin.fail());
    
    do
    {
        cout << "Enter a valid number for y\n";
        cin >> y;
    } while (cin.fail());

        do
    {
        cout << "Enter a valid number for z\n";
        cin >> z;
    } while (cin.fail());

    if (x > y && x > z)
    {
        cout << "X is the biggest number\n";
    }
    else if (y > x && y > z)
    {
        cout << "Y is the biggest number\n";
    }
    else
    {

        cout << "Z is the biggest number \n";
    }
    return;
}
