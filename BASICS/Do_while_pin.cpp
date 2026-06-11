#include <iostream>
using namespace std;

int main()
{

   // PIN

   int CorrectPIN = 7869, PIN, Counter = 0;

   do
   {
      cout << "PIN : ";
      cin >> PIN;

      if (PIN != CorrectPIN)
      {
         Counter++;
      }

   } while (Counter < 3 && PIN != CorrectPIN);

   if (Counter < 3)
   {
      cout << "Unlocked";
   }
   else
      cout << "Locked";

   return 0;
}