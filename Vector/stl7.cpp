#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
	vector<int>vrr(n),vrr1;  //Size of vrr1 is 0 Currently.     
	cout<<"Enter total ELements:";
	cin>>n;
	for(int i=0;i<n;i++)  //Here, we don't need help of push_back() function.
	{
		cin>>vrr[i];
	}
	vrr1.swap(vrr);     //swap the elements of the two vector.
	cout<<"vrr=";
	for(int i=0 ; i<vrr.size() ; i++){
		cout<<vrr[i]<<" ";
	}
	cout<<"vrr1=";
	for(int i=0; i<vrr1.size();i++){
	    cout<<vrr1[i]<<" ";
	}
	 
    return 0;
}
