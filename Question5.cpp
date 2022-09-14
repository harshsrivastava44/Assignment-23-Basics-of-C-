//5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    float lenght,width,height,Volume;
    cout<<"Enter Lenght of a cuboid :"<<endl;
    cin>>lenght;
    cout<<"Enter Width of a cuboid :"<<endl;
    cin>>width;
    cout<<"Enter Height of a cuboid :"<<endl;
    cin>>height;
    Volume=lenght*width*height;
    cout<<"The Volume of the Cuboid is :"<<Volume;
    return 0;

}