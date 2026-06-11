#include <iostream>
using namespace std;

int main()
{
    // Reversing digits of Programs
    int n, rev_no = 0;

    cout << "Enter No. : ";
    cin >> n;

    if (n == 0)
    {
        cout << "0";
    }

    while (n != 0)
    {
        rev_no = rev_no * 10;

        int lastdigit = n % 10;

        rev_no = rev_no + lastdigit;

        n /= 10;
    }

    if (n < 0)
    {
        n = -n;
        cout << "Reverse :" << "-" << rev_no;
    }
    else
        cout << "Reverse : " << rev_no;

    return 0;
}