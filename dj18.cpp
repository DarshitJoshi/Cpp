//reverse the string
#include<iostream>

using namespace std;

int findLength(string s)
{
   int i=0;
   while(s[i] != '\0')
   {
    i++;
   }
   return i;

}

string reverseStr(string str, int l)
{
    int s=0;
    int e=l-1;

    while(s<e)
    {
        swap(str[s++],str[e--]);
    }
    return str;
}

int main()
{
    string s1;
    cout<<"Enter the word:";
    cin>>s1;

    int l=findLength(s1);

    string s2= reverseStr(s1, l);

    cout<<s2;
}
