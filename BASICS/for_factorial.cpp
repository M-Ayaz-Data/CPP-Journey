#include <iostream>
using namespace std;       

int main()
{
    int number, Factorial = 1;

    cout << "Enter Number : ";
    cin >> number;


    for (int i = 1; i <= number; i++)
    {
        Factorial = Factorial * i;
    }
    cout << number << "!=" << Factorial;

    return 0;
}