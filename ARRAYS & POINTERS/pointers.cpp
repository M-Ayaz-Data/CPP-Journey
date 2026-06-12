#include <iostream>
using namespace std;

void swap(int &a, int &b) // (1) Taking copies of x and y
{
    int temp = a; // (2) temp = a (copy of x)
    a = b;        // (3) a = b (copy of y)
    b = temp;     // (4) b = temp (copy of x)
}

int main()
{
    int x = 5, y = 6;
    cout << "Before: x = " << x << ", y = " << y << endl;

    swap(x, y); // (5) Pass COPY of x and y

    cout << "After:  x = " << x << ", y = " << y << endl;

    cout << endl
         << endl
         << endl;

    int a = 24;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;
    cout << p << endl
         << endl;

    cout << q << endl;  // address of p
    cout << *q << endl; // address stored by p
    cout << **q;        // value at address stored by p

    return 0;
}
