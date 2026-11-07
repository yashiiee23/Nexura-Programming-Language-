#include <iostream>
using namespace std;
int main() 
{
    int i, start, end;
    cout<<"start : ";
    cin>>start;
    cout<<"end : ";
    cin>>end;
    cout<<"Even numbers in range: "<<endl;
    for(i=start;i<=end;i++)
        if(i%2==0)
            cout<<i<<endl;
    return 0;
}