//Reverse a string using stack
#include<iostream>
#include<stack>  //header file of stack
using namespace std;

int main(){

    string str = "darshit joshi";
    stack<char> s;

    for( int i = 0 ; i < str.length() ; i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while( !s.empty() ){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<"Reverse of inputted string is :"<<ans<<endl;

    return 0;
}