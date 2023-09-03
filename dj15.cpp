#include<iostream>
using namespace std;

bool checkEqual(int a[26], int b[26] )
{
    for (int i=0 ; i<26 ; i++)
    {
        if( a[i]!=b[i])
        {
           return 0;
        }
    }
    return 1;
} 
int main()
{

    string s1="ab";
    string s2="bdboabo";
    int count1[26]={0};

    //s1 ke element count1 mai dal diye
    for(int i=0; i<s1.length(); i++)
    {
        int index = s1[i]-'a';
        count1[index]++;
    }

    int i=0;
    int windowSize=s1.length();
    int  count2[26]={0};
    
    //phli window traverse ki
    while(i<windowSize && i<s2.length())
    {
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
   
    if( checkEqual(count1,count2) )
    {
        cout<<"true";
        return 1;
    }

    while(i<s2.length())
    {
        char newChar=s2[i]; //new element jo hm window me la rhe hai
        int index= newChar-'a';
        count2[index]++;

        char oldChar=s2[i-windowSize]; //old element jo hm window se hta rhe hai
        index =oldChar-'a';
        count2[index]--;
        
    if( checkEqual(count1,count2) )
    {
        cout<<"true";
        return 1;
    }
    i++;
    }
    
    cout<<"false";
    return 0;
}
