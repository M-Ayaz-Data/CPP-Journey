#include<iostream>
using namespace std;

int main()
{
   float a,b,c;
   cout << "Enter values : ";
   cin>>a>>b>>c;


   if (a==b && b==c)
   {
      cout<<"Eq tringle";
   }
   else
   {
      if (a != b && a!=c && b!=c)
      {
         cout<<"s tringle";
      }
      else
      {
         cout<<"is tringle";
      }
   }

   return 0;
}