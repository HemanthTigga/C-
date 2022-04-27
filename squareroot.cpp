#include<iostream>
using namespace std;
int squareroot(int n)
{
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e)
    {
        //cout<<"s"<<s<<endl;
        //cout<<"e"<<e<<endl;
        //cout<<"mid"<<mid<<endl;
        if(mid*mid<n)
        {
            ans=mid;
            s=mid+1;
        }
        if(mid*mid>n)
        {
            e=mid-1;
        }
        if(mid*mid==n)
        {
            return mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<squareroot(n);
    return 0;
}

