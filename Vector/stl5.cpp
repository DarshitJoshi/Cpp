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
	//vrr.front(),vrr.back()->These functions are used to give 1st and lastv element of the array.
	cout<<vrr.front()<<" "<<vrr.back()<<endl;
	//vrr.max_sixe()->It returns the total elements this vector can store.
	cout<<"Total Elements this vector can store:"<<vrr.max_size()<<endl;  //this is for int.
	//vrr.capacity()->it tells us currently what storage we have for the vector
	cout<<"Capacity:"<<vrr.capacity();
	return 0;
}
