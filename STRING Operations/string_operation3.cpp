#include <iostream>
#include <string>
using namespace std;

// check name is palindrome or Not 

int main()
{
   string name;
   cout << "Enter name : ";
   cin >> name;
   int length = name.length();
   string rev;
   for (int i = length - 1; i >= 0; i--)
   {
      rev = rev + name[i];
      
   }
   if (name == rev)
   {
      cout<<"Palindrome"<<endl;
   }
   else{
      cout<<"Not palindrome"<<endl;
   }
   
   cout << name << endl;
   cout << rev<<endl;



   return 0;
}