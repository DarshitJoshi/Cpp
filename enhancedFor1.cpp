//for array we got an for loop which is known as for each loop or enhanced for loop
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,6};
    for(int k : a)
    {
        cout<<k<<" ";
    }
    return 0;
}