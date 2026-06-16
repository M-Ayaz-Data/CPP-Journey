#include <iostream>
#include <string>
using namespace std;

class Student
{
   string name;
   int age;
   int marks;
   public:
   Student(string n, int a, int m);
   void display();
};
Student::Student(string n, int a, int m)
{
   name = n;
   age = a;
   marks = m;
}
void Student::display(){
   cout<<"Name : "<<name<<" "<<"Age : "<<age<<" "<<"Marks : "<<marks<<endl;

}

int main()
{
   Student s1("Abbas",20,67);
   Student s2("Ilyas",20,72);

   s1.display();
   s2.display();
   return 0;
}