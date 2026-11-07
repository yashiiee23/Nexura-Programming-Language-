#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;

    cout<<"Enter four numbers: ";
    cin>> a;
    cin>> b;
    cin>> c;
    cin>> d;

    if (a >= b && a >= c && a >= d)
    {
        cout<< "Greatest number is " <<a;
    }
    else if (b >= a && b >= c && b >= d)
    {
        cout<< "Greatest number is " <<b;
    }
    else if (c >= a && c >= b && c >= d)
    {
        cout<< "Greatest number is " <<c;
    }
    else
    {
        cout<< "Greatest number is " <<d;
    }
    return 0;
}