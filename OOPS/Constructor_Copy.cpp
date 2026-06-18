#include <iostream>
using namespace std;
//Copy constrctor 
class cpy
{
    int a;

public:
    cpy(int);
    cpy(cpy &obj)
    {
        cout << "copy Constructor is called ! " << endl;
        a = obj.a;
    }
    // Distructor is created 
    // For cleanup memory 
    ~cpy(){
        cout<<"Destructor is called !";
    }
    // Distructor is auto called by compiler because we just used constructor to intialize value..
    // If we allocate like use --> new / malloc / or pointer ext then we have to manualy free up memory
    void display()
    {
        cout << "Display the Number : " << a << endl;
    }
};

cpy::cpy(int num)
{
    a = num;
}

int main()
{
    cpy c(5);
    c.display();
    cpy d(c);
    d.display();
    return 0;
}