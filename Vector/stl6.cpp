#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>vrr(n);      //Predefining the size of the array
	//NOTE- vrr[n] is different thing. here each element of vrr is an array
	//i.e, vrr[0] is the 1st array. So, use-> vrr(n),NOT->vrr[n] this.
	for(int i=0;i<n;i++)  //Here, we don't need help of push_back() function
	{
		cin>>vrr[i];
	}
	for(int i=0;i<n;i++)  //Here, we don't need help of push_back() function
	{
		cout<<vrr[i]<<" ";
	}
	return 0;
}
