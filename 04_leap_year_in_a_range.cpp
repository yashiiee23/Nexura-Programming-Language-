#include <iostream>
using namespace std;
int main()
{
    int start, end;

    cout<< "Enter starting year ";
    cin>> start;
    cout<< "Enter ending year ";
    cin>> end;
    cout<< "Leap years are ";

    for (int year = start; year <= end; year++)
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout<< year << " ";
    return 0;
}