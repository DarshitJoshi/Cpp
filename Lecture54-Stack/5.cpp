//valid parathesis or not ?
#include<iostream>
#include<stack>
using namespace std;


bool isValidParanthesis( string str ){

    stack<char> s;

    for(int i = 0 ; i < str.length() ; i++){
        char ch = str[i];

        //push in stack if ch is opening bracket
        if( ch == '(' || ch == '{' || ch == '[' ){
            s.push(ch);
        }
        //else check with stack top if same pop it else retuen false
        else{
            if( !s.empty() ){
                char top = s.top();
                cout<<top<<"="<<ch<<" ?"<<endl;
                //if( top == ch ) ye condition nhi chlegi
                if( ( top == '(' && ch ==')' ) || 
                    ( top == '{' && ch =='}' ) ||
                    ( top == '[' && ch ==']' ) ){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{ //stack empty
                return false;
            }
        }
    }
    if (s.empty() ){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    
    string str = "[{())}]";

    if ( isValidParanthesis( str ) ){
        cout<<"......Balanced parathesis....."<<endl;
    }
    else{
        cout<<"......Not a Balanced paranthesis....."<<endl;
    }

    return 0;
}