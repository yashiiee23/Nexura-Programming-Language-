#include <iostream>
using namespace std;
int main() 
{
    int choice;
    float a,b;
    cout<<"Enter first number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"choice ";
    cin>>choice;
    if (choice==1)
        cout<<"Addition: "<<a+b;
    else if (choice==2)
        cout<<"Subtraction: "<<a-b;
    else if (choice==3)
        cout<<"Multiply: "<<a*b;
    else if (choice==4)
    { 
        if(b!=0)
            cout<<"Divide : "<<a/b;
        else
            cout<<"Cannot divide by zero";
    }
    else
        cout<<"Invalid choice";
    return 0;
}