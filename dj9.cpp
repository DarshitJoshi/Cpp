//length of string
#include<iostream>
using namespace std;

int myStrLen(char ch[])   //character array mai size pass krne ki need nhi hai. 
{
     int i=0,len=0;
     while(ch[i]!='\0')
     {
        len++;
        i++;
     }
     return len;
     
}

int main()
{
    char ch[20];
    cout<<"Enter the string:";
    cin>>ch;

    int len=myStrLen(ch);

    cout<<"Length of "<<ch<<" is: "<<len;
    return 0;
}