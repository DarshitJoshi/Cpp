#include<iostream>
using namespace std;
int main()
{
    string str;
    //cout<<"Enter the world:";
    //getline(cin,str);
    //cout<<str<<endl;

    //functions in string
    //append
    string s1="fam";
    string s2="ily";

    s1.append(s2);
    cout<<s1<<endl;

    cout<<s1.size()<<endl;
    cout<<s1.find_first_of("i");
}