#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums,output;

    int n,key;
    cout<<"Enter total elements:";
    cin>>n;
    cout<<"Enter Elements:";
    for(int i=0 ; i < n ; i++){
        cin>>key;
        nums.push_back(key);
    }
    
    int i=0;
    while( i<nums.size() ){
        int ans = 0;
        for(int j=0 ; j<nums.size() ;j++ ){
            if( nums[i] > nums[j]){
                ans++;
            }
        }
        output.push_back(ans);
        i++;
    }
    cout<<"ANS"<<endl;
    for(int i=0 ; i < output.size() ; i++){
        cout<<output[i]<<" ";
    }
    return 0;
}