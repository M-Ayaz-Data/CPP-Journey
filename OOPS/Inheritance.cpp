#include <iostream>
using namespace std;

class parent
{
   int a;

public:
   int A;
   int B;

   parent(int a1)
   {
      a = a1;
   }
   parent(int x, int y)
   {
      A = x;
      B = y;
   }
   void display()
   {
      cout << "A = " << A << endl
           << "B = " << B << endl;
   }
   void dis()
   {
      cout << "a = " << a;
   }
};

class child : public parent
{
   int D, F; 

public:
   child(int d, int f) : parent(d, f)
   {
      D = d;
      F = f;
   }
   // access a form parent
   child(int o) : parent(o)
   {
   }
};

int main()
{ // private of parent
   parent p0(77);
   p0.dis();
   // public of parent
   parent p(5, 7);
   p.display();

   // child access to parent
   child c(1, 2);
   c.display();

   // access a (a private data) with child class

   child c0(88);
   c0.dis();

   return 0;
}