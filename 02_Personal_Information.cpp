#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int age;
    string name;
    string college;
    string branch;
 
    cout << "Enter your name";
    getline(cin, name);
    cout << "Enter your age";
    cin >> age; 
    cout << "Enter your college"; 
    getline(cin, college);
    cin.ignore();
    cout << "Enter your branch";
    getline(cin, branch);
    cin.ignore(); 

    cout <<"Your name is" <<name <<endl;
    cout <<"Your age is" <<age <<endl;
    cout <<"Your college is" <<college <<endl;
    cout <<"Your branch is" <<branch <<endl;

    return 0; 
}