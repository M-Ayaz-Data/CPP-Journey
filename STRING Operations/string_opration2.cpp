#include <iostream>
#include <string>
using namespace std;

// Reverse Name 

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
   cout << name << endl;
   cout << rev;

   return 0;
}