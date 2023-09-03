//return Maximum occuring character in string
// give input only small character
#include<iostream>
using namespace std;

char maxOccurCharacter(string s)
{
    int arr[26]={0};

    for(int i=0 ; i< s.length() ; i++)
    { 
        char ch=s[i];
        int index=0;

        //counting no.. of character
        if(ch >= 'a' && ch <= 'z')
        {
            index=ch-'a';
        }
        arr[index]++;
    }

    //find maximum ocurring character
    int maxi=-1;
    int ans=0;

    for(int i=0 ; i<26 ; i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }

    char finalAnswer= 'a'+ans;
    return finalAnswer;
}

int main()
{
    string s;
    cout<<"Enter the word:";
    cin>>s;

    cout<< maxOccurCharacter(s) <<endl;
}