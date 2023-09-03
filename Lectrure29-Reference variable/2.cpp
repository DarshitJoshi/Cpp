#include<iostream>
using namespace std;
void update(int &i){
    i++;
}
int main(){
    int n=5;
    cout<<"Before:"<<n<<endl;
    update(n);
    cout<<"After:"<<n<<endl;
    return 0;
}