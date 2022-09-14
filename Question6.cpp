//6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    cout<<"Enter first number "<<endl;
    cin>>a;
    cout<<"Enter second numbe :"<<endl;
    cin>>b;
    cout<<"Enter third numbers :"<<c<<endl;
    cin>>c;
    avg=(a+b+c)/3;
    cout<<"The Average of three numbers is :"<<avg;
    return 0;

}