//check if string is a palindrome
// Note-string is not case sensitive
#include<iostream>
using namespace std;

char toLower(char ch)
{
    if( ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        ch=ch+32;
        return ch;
    }
}

bool checkPalindrome(string str)
{
    int s=0;
    int e=str.length()-1;
    while(s<=e)
    {
        if( toLower(str[s]) != toLower(str[e]) )
        {
            return 0;
        }
    s++;
    e--;
    }
    return 1;
}

int main()
{
    string s1;
    cout<<"Enter the string:";
    cin>>s1;



    if(checkPalindrome(s1)){
        cout<<"palindrome";
    }

    else{
        cout<<"Not a palindrome";
    }
}