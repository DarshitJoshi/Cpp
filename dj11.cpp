//check whether string is palindrome or not
//without storing it into another character array
// Note-> Sring is not case sensitive
#include<iostream>
using namespace std;

int myStrLen(char name[])   //character array mai size pass krne ki need nhi hai. 
{
     int i=0,len=0;
     while(name[i]!='\0')
     {
        len++;
        i++;
     }
     return len;
     
}


void reverse(char name[], int len)
{
    int i=0;
    int j=len-1;

    while(i<j)
    {
        swap(name[i],name[j]);
        i++;
        j--;
    }
    
}

char toLower(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        ch=ch+32;
        return ch;
    }
}


bool palndrm(char name[],int len)
{
    for(int i=0, j=len-1; i<j ; i++ , j-- )
    {
        if( toLower(name[i]) != toLower(name[j]))   //for removing case sensitivity
        {
            return 0;
        }
    }
    return true;
}

int main()
{
    int i=0;
    char name[20];

    cout<<"Enter the string:";
    cin>>name;


    int len=myStrLen(name);
    reverse(name,len);

    bool find=palndrm(name, len);


    if(find==true)
    {
        cout<<"String is palindrome";
    }
    else
    {
        cout<<"String is not palindrome";
    }

    return 0;
}