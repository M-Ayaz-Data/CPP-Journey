#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    int set_roll_number(int);
    void get_roll_number()
    {
        cout << "Roll Number : " << roll_number << endl;
    }
};
int Student ::set_roll_number(int r)
{
    roll_number = r;
}

class Exam : public Student
{
protected: 
    int maths;
    int physics;

public:
    void set_marks(int, int);
    void get_marks()
    {
        cout << "Maths Marks : " << maths << endl;
        cout << "Physics Marks : " << physics << endl;
    }
};

void Exam ::set_marks(int m1, int m2)
{
    maths = m1;
    physics = m2;
}

class Result : public Exam
{
public:
    void percentage();
};
void Result ::percentage()
{
    get_roll_number();
    get_marks();
    cout << "Result : " << (maths + physics) / 2 << "%" << endl;
}

int main()
{

    Result ayz;
    ayz.set_roll_number(29);
    ayz.set_marks(72,96);
    ayz.percentage();

    return 0;
}