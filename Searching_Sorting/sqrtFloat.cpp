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
double moreprecision(int n,int precision,int tempsol)
{
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int tempsol=squareroot(n);
    cout<<moreprecision(n,3,tempsol);
    return 0;
}

