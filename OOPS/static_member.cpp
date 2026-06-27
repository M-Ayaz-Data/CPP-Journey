#include <iostream>
using namespace std;

class Employee
{
    int id;
    // Static Member
    static int count;

public:
    // static function
    static int sum(int a, int b)
    {
        return a + b;
    }

    void setData(void)
    {
        cout << "Enter id";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "Emp id is" << id << endl
             << "Employee Number " << count << endl;
    }
};

int Employee ::count; // default 0 

int main()
{
    Employee ayz, nmn, shd;
    ayz.setData();
    ayz.getdata();

    nmn.setData();
    nmn.getdata();

    shd.setData();
    shd.getdata();
    // This is how we call static funtion
    cout << Employee::sum(2, 2);

    return 0;
}