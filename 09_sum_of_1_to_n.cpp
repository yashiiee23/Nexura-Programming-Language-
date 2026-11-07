#include <iostream>
using namespace std;
int main() 
{
    int i, n, sum ;
    cout<<"End : ";
    cin>>n;
    cout<<"Sum of numbers from 1 to " <<n <<" is" <<endl;
    sum=0;
        for(i=1;i<=n;i++)
            {
            sum=i+sum;
            }
            cout<<sum;
return 0;
}