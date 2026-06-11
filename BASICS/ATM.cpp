#include <iostream>
using namespace std;

// checkbalance deposit withdraw exit

void showMenu()
{
    cout << "--------Menu---------" << endl;
    cout << "1. Checkbalance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
}

int main()
{

    int option;
    int Balance = 10000;
    do
    {
        showMenu();
        cout << "Option : ";
        cin >> option;

        switch (option)
        {
        case 1:

            cout << "Balance :" << Balance << endl;
            break;

        case 2:
            int deposite;
            cout << "Enter Amount : ";
            cin >> deposite;
            Balance += deposite;
            break;

        case 3:
            int withdraw;   
            cout << "Enter Amount : ";
            cin >> withdraw;
            if (withdraw <= Balance)
            {
                Balance -= withdraw;
            }
            else
            {
                cout << "Not efficiant fund";
            }
            break;
        case 4:
            cout << "You are Exited";

            break;
        }
    } while (option != 4);

    return 0;
} 