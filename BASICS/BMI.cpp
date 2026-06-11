#include<iostream>
using namespace std;

int main()
{
      // BMI CALCULATER

      float weight_kg ;
      float height_m  ;
      float BMI ;
      cout<<"Enter weight : ";
      cin>>weight_kg;
      cout<<"Enter height : ";
      cin>>height_m;

      BMI = ( weight_kg / (height_m * height_m)) ;

      if (BMI < 18.5)
      {
         cout<<"Underweight"<<endl;
      }
      else if (BMI >= 18.5 && BMI <=24.9)
      {
         cout<<"Normal-weight"<<endl;
      }
      else if (BMI > 24.9)
      {
         cout<<"Overweight"<<endl;
      }
      else 
      {
         cout<<"YOU NEED TO VISIT DR."<<endl;
      }
      
      cout<<"BMI Result : "<<BMI;


   return 0;
}