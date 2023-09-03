#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> ans,int a)
{
    for(int i=0,j=a-1; i<j; i++,j--)
    {
        swap(ans[i],ans[j]);
    }
    return ans;
}

vector<int> ArraySum(vector<int> a , int m, vector<int> b , int n)
{
    int i=m-1;
    int j=n-1;
    int carry=0,sum;
    vector<int> ans;

    while(i>=0 && j>=0)  //case3
    {
        int val1=a[i];
        int val2=b[j];

        sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;

        ans.push_back(sum);    // jo ans ayega usko reverse krna pdega

        i--;
        j--;
        
    }

    while(i>=0) //case1
    {
        int val1=a[i];

        sum=val1+carry;
        carry=sum/10;
        sum=sum%10;

        ans.push_back(sum);    // jo ans ayega usko reverse krna pdega

        i--;
        
    }

     while(j>=0) //case2
    {
        int val2=b[j];

        sum=val2+carry;
        carry=sum/10;
        sum=sum%10;

        ans.push_back(sum);    // jo ans ayega usko reverse krna pdega

        j--;
        
    }

    while(carry!=0)
    {
        sum=carry;
        carry=sum/10;
        sum=sum%10;

        ans.push_back(sum); 

       
    }

    int x=ans.size();
    ans=reverse(ans,x);

    return ans;

}

int main()
{
    int m,n,key;

    cout<<"Enter total elements of the array1:";
    cin>>m;

    cout<<"Enter total elements of the array2:";
    cin>>n;

    vector<int> arr1;
    vector<int> arr2;
    vector<int> ans;
    cout<<"Enter the elements of arr1:";
    for(int i=0; i<m; i++)
    {
        cin>>key;
        arr1.push_back(key);
    }

    cout<<"Enter the elements of arr2:";
    for(int i=0; i<n; i++)
    {
        cin>>key;
        arr2.push_back(key);
    }

    ans=ArraySum(arr1,m,arr2,n);

    cout<<"Printing:";
    for(int i=0 ; i<ans.size(); i++)
    {
        {
          cout<<ans[i]<<" ";
        }
    
    }

    return 0;
}
