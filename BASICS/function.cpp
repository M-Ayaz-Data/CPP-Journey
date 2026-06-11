#include <iostream>
using namespace std;

int getmax(int a, int b, int c)
{

    if (a == b && a == c)
    {
        cout << "Equal Numbers";
        return a;
    }
    else if (a == c && a < b)
    {
        cout << "B is Greatest !! ";
        return b;
    }
    else if (a == c && a > b)
    {
        cout << "A and C is Equal and Greater then B";
        return a;
    }
    else if (b == c && a > b)
    {
        cout << "A is Greatest !! ";
        return a;
    }
    else if (b == c && a < b)
    {
        cout << "B and C is Equal and Greater then A";
        return b;
    }
    else if (a == b && a > c)
    {
        cout << "A and B is Equal and Greater then C";
        return a;
    }

    else
    {

        if (a > b && a > c)
        {
            cout << "A is Greatest !! ";
            return a;
        }
        else if (b > a && b > c)
        {
            cout << "B is Greatest !";
            return b;
        }
        else
        {
            cout << "C is Greatest !";
            return c;
        }
    }
}

int getavg(int x, int y, int z)
{
    int avg = (x + y + z) / 3;
    return avg;
}

int main()
{
    int num1, num2, num3;
    cout << "Enter 3 Numbers : ";
    cin >> num1 >> num2 >> num3;

    cout << endl
         << "Maximum Value : " << getmax(num1, num2, num3) << endl;

    cout << "Average of 3 Numbers - " << getavg(num1, num2, num3);

    return 0;
}
