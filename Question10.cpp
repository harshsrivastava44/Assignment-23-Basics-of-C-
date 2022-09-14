//10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,arr[10];

    cout<<"Enter 10 numbers of an array :"<<endl;
    for ( i = 0; i <10; i++)
    {
        cin>>arr[i];
    }
    for ( i = 0; i <10; i++)
    {
       sum=sum+arr[i];
    }
    cout<<"The sum of all numbers of an array is :"<<sum;
    return 0;
   

}