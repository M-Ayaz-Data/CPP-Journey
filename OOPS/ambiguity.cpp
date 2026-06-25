#include<iostream>
using namespace std;

class A{
    public:
        void greet(){
            cout<<"Hello Good Morning !!";
        }
};

class B{
    public:
        void greet(){
            cout<<"Hello Good Evening !!";
        }
};

class c : public A,public B{
    public:
    // Here WE solved Ambiguity (when compiler got confused which one to call or choose )
    void greet(){
        B ::greet();
    }
};

int main()
{
    c c;
    c.greet();
    return 0;
}