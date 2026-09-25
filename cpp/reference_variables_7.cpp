#include <iostream>
using namespace std;
int c=49;
int main()
{
//------------------------BUILT IN DATA TYPES------------------------------------------------

    int a,b,c;
    cout<<"enter value of a: "<<endl;
    cin>>a; //INPUT FUNCTION
    cout<<"enter value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"sum of a and b is:" <<c<<endl;
    cout<<"global c is:" <<::c; // TO GET GLOBAL VALUE USE STD ::

    float d=34.4;
    long double e=67.7;
    cout<<"value of d is:" <<d<<endl<<"value of e is: "<<e;

//------------------------DATA TYPES------------------------------------------------

    cout<<"size of 34.4 is:" <<sizeof(34.4)<<endl; // default parameter for decimal no. is DOUBLE
    cout<<"size of 34.4f is:" <<sizeof(34.4f)<<endl;
    cout<<"size of 34.4F is:" <<sizeof(34.4F)<<endl;
    cout<<"size of 34.4l is:" <<sizeof(34.4l)<<endl;
    cout<<"size of 34.4L is:" <<sizeof(34.4L)<<endl;


 //------------------------REFERENCE VALUES------------------------------------------------

 // sneha ---> chiriya ----> gulu bulu

 float x = 67.99;
 float & y=x; // use & 
 cout<<"value of x; "<<x<<endl;
 cout<<"value of y; "<<y<<endl;

    return 0;
}