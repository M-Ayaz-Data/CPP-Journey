#include <iostream>
using namespace std;

// Print full name , length of name , first and last character of name

int main()
{
   string name;
   cout << "Enter Name : ";
   getline(cin, name);

   int length = name.length();
   
   cout<<"Full Name : "<<name<<endl;
   cout << "Total Ch in Name : " << length << endl;

   cout << "First Ch is " << name[0] << endl;
   cout << "Last Ch is " << name[length - 1];
   return 0;
}