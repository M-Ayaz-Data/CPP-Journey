#include <iostream>
using namespace std;
// Array and pointer arethmetic program
int main()
{
   int arr[5] = {5, 55, 555, 3, 33};
   int *p = arr;
   cout << "address of p before loop : " << p << endl;
   cout << "value at this address : " << *p << endl;
   for (int i = 0; i < 5; i++)
   {
      cout << *(p + i) << " ";
   }
   cout << endl;
   cout << "address of p after loop : " << p << endl;
   cout << "value at this address : " << *p;
   return 0;
}