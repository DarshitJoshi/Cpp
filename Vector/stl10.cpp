//Try in VS code
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Elements";
	cin>>n;
	vector <int> vrr(n);
	cout<<"Enter Elements:";
    for(int i=0;i<n;i++)
    {
    	cin>>vrr[i];
	}
	cout<<"USE of begin(),end():";
	for(auto it=vrr.begin();it!=vrr.end();it++)                 // begin(),end()
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"USE of rbegin(),rend():";
	for(auto it=vrr.rbegin();it!=vrr.rend();it++)                 // rbegin(),rend()   r=reverse
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"USE of cbegin(),crend():";                      //we don't want to change the value c=costant
	for(auto it=vrr.cbegin();it!=vrr.cend();it++)
	{
	    //*it=5;                // it will give me error
		cout<<*it<<" ";                   // cbegin(),cend()   c=constant
	}                                     //  crbegin(),crend()   c=constant
	return 0;
}
