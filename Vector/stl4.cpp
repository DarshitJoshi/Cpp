#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>vrr;      //indexing is not the only method to access the element we can use .at() function also.
	int key,n;
	cout<<"Enter total ELements:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" element:";
		cin>>key;
		vrr.push_back(key);
	}
	for(int i=0;i<vrr.size();i++)
	{
		cout<<i+1<<"st"<<" element:"<<vrr.at(i)<<endl;
	}
	return 0;
}
