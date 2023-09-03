//starting to character array.(strings)
#include<iostream>
using namespace std;
int main()
{
    char name[20];

    cout<<"Enter your full name:";
    cin>>name;
    //cin>>name;     //Problem hogi jb tum isme full name daloge .
    //cin will stop the execution when you give it space,tab(capslock ke uppr wala),newline(enter) character.
    cout<<"Your name is : "<<name;
    
    return 0;
}