//Check whether the string is palindrome
#include<iostream>
using namespace std ;

bool checkPalindrome(string str , int i , int j){

    if(i>j)
      return true;
    
    if( str[i] != str[j])
      return false;
    else{
        //recurrence relation
        checkPalindrome( str , i+1, j-1);
    }
}
int main(){

    string name = "abcdeedcba";
    
    bool ans = checkPalindrome( name , 0 , name.length()-1 );

    if(ans){
        cout<<"It is palindrome ";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}