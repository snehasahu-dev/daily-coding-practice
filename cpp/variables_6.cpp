#include <iostream>
using namespace std;
int glo =7; //global variable

void sum()
{
    cout<<"\n" <<glo;
}

int main()
{
    int glo=12; //local variable
    glo=1; //local variable value reset
    /*first preference is given to local variable , then globle variable*/
    int a =44, b=67;
    cout<<"value of glo is " <<glo<< "\nvalue of a " <<a<< "\nvalue of b is " <<b;
    sum();
    return 0;
}

