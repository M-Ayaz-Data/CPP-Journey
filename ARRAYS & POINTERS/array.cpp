#include<iostream>
using namespace std;

int main()
{
    int arr[5]={11,22,33,44,55};
    int i=0;
    

    do
    {
        cout <<" The value at no. "<<i<<"is"<<arr[i]<<endl;
        i++;        
    }while( i < 5);
    
    return 0;
}