#include <iostream>
using namespace std;

// Constructor Program

class con
{
    int a, b;

public:
    con(void)
    {
        cout << "Hello world!";
    }
    // peramiterize declaration
    con(int, int);
};
// peramiterize Constructor defination
con::con(int a, int b)
{
    a = a;
    b = b;
    cout << "The value of a is" << a << endl
         << "The value of b is" << b;
}

int main()
{
    con c;
    con g(3, 6);
    return 0;
}