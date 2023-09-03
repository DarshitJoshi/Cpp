#include<iostream>
using namespace std;
int& update(int i){    //returning a reference varible
    int num=i;
    int &ans=num;
    return ans;
}
int* fun(int i){
    int* ptr=&i;
    return ptr;
}
int main(){
    int j=5;
    cout<<"Before:"<<j<<endl;
    update(j);
    cout<<"After:"<<j<<endl;
    cout<<fun(j);
    return 0;
}