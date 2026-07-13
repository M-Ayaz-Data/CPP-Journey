#include <iostream>
using namespace std;

class base1
{
protected:
    int num1;

public:
    void set_num1(int a)
    {
        num1 = a;
    }
};

class base2
{
protected:
    int num2;

public:
    void set_num2(int a)
    {
        num2 = a;
    }
};
// Way to Declare Multiple Inheritance
class Derived : public base1, public base2
{
public:
    void display()
    {
        cout << "Value of num1 is " << num1 << endl;
        cout << "Value of num2 is " << num2 << endl;
        cout << "Sum of Numbers is " << num1 + num2 << endl;
    }
};

int main()
{
    Derived d;
    d.set_num1(25);
    d.set_num2(100);
    d.display();
    return 0;
}