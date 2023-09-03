#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector <int> vrr(n);
	cout<<"Enter Elements:";
    for(int i=0;i<n;i++)
    {
    	cin>>vrr[i];
	}
	//vrr.clear();    //it will remove all the elements from the array
	cout<<"vrr=";
	for(int i=0;i<vrr.size();i++)
    {
    	cout<<vrr[i]<<" "<<endl;
	}
	if(vrr.empty())      //empty function return true if vrr is empty
	{
		cout<<"vrr is empty";
	}
	else
	{
		cout<<"vrr is not empty";
	}
	return 0;
}
