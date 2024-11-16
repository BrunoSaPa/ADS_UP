#include <iostream>
using namespace std;
#include <unordered_map>
#include <string>

bool checkNumber(int num);
void menu();
long double balance = 10000;
void transfer();
void consult();
void withdraw();

int main()
{
    unsigned int res;
    unsigned int PIN = 1234;
    cout << "Enter your PIN to acces your account\n";
    cin >> res;
    while (res != PIN)
    {
        cout << "Incorrect PIN, try again\n";
        cin >> res;
    }
    menu();
    return 0;
}

void menu()
{

    char res;
    do
    {
        cout << "Enter an option in the menu\n1-Consult balance\n2-Withdraw\n3-Bank transfer\ne- exit\n";
        cin >> res;
        switch (res)
        {
        case '1':
            consult();
            break;

        case '2':
            withdraw();
            break;

        case '3':
            transfer();
            break;

        case 'e':
        case 'E':
            break;
        default:
            break;
        }
    } while (res != 'e' && res != 'E');
    return;
}

void transfer()
{
    unordered_map<int, string> d;
    d[0] = "BBVA";
    d[1] = "NU";
    d[2] = "Santander";
    d[3] = "CITI";
    d[4] = "HSBC";
    string bank;

    cout << "Enter a the number of a bank to transfer money to: \n";

    for (auto it : d)
        cout << it.first << " - " << it.second << endl;

    int res1;
    cin>> res1;
    while (!(res1 > 0 || res1 < 4))
    {
        cout << "That index doesn't exist, try again \n";
        cin >> res1; 
    }

    long double res;
    cout << "Enter the amount to transfer: \n";
    cin >> res;

    while (res <= 0)
    {
        cout << "Enter a valid amount (greater than zero)\n";
        cin >> res;
    }

    while (res > balance)
    {
        cout << "Insuficient funds, you have: " << balance;
        cin >> res;
    }

    cout << "You have transfered " << res << " to " << d[res1] << "\n";
    balance -= res;

    return;
}

void withdraw()
{
    long double res;
    cout << "Enter the amount to withdraw: \n";
    cin >> res;

    while (res <= 0)
    {
        cout << "Enter a valid amount (greater than zero)\n";
        cin >> res;
    }

    while (res > balance)
    {
        cout << "Insuficient funds, you have: " << balance;
        cin >> res;
    }

    balance -= res;
    return;
}

void consult()
{
    cout << "Your current balance is: " << balance << "\n";
    return;
}