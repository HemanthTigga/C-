#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s=0,e=v.size()-1;
    while(s<=e)
    {
        swap(v[s++],v[e--]);
    }
    return v;
}
vector<int> findArraySum(vector<int> a,int n,vector<int> b,int m)
{
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry=0;
    while(i>=0&&j>=0)
    {
        int var1=a[i];
        int var2=b[j];
        int sum=var1+var2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //first case
    while(i>=0)
    {
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    //second case
    while(j>=0)
    {
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    //Third case
    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    return(reverse(ans));
}
int main()
{
    int n,a;
    cout<<"size of 1st array"<<endl;
    cin>>n;
    vector<int> arr1;
    for(int j=0;j<n;j++)
    {
        cin>>a;
        arr1.push_back(a);
    }
    a=0;
    int m;
    cout<<"size of 2nd array"<<endl;
    cin>>m;
    vector<int> arr2;
    for(int j=0;j<m;j++)
    {
        cin>>a;
        arr2.push_back(a);
    }
    vector<int> ans;
    ans=findArraySum(arr1,n,arr2,m);
    for(int j=0;j<ans.size();j++)
    {
        cout<<ans[j]<<" ";
    }
}
