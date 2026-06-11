#include <iostream>
using namespace std;

int main()
{
   //Built A Program for counting digits of a number   

   int counter = 0, n;

   cout << "Enter No.: ";
   cin >> n;

   if (n == 0)
   {
      cout << "You Selected Number 0";
   }
   else
   { 
      if (n < 0)
      {
         n = -n ;
      }
      

      while (n != 0)
      {
         n = n / 10;
         counter++;
      }  
   }

   cout <<"The Number contains"<<" "<<counter<<" "<<"digits";

   return 0;
}