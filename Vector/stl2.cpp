#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>vrr;
	//push_back->it pushes the element at the end of the vector(to 0th element)
	vrr.push_back(5);     // 0th element
	vrr.push_back(10);   // 1st element
	cout<<"vrr[0]="<<vrr[0]<<endl;
    cout<<"vrr[1]="<<vrr[1]<<endl;
    cout<<"size="<<vrr.size();   //Size
	return 0;
}
