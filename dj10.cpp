//Reverse the string
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

int main()
{
    int i=0;
    char name[20];

    cout<<"Enter the string:";
    cin>>name;

    cout<<"Before:"<<name<<endl;

    int len=myStrLen(name);
    reverse(name,len);

    cout<<"After:"<<name<<endl;
    
    

    return 0;
}