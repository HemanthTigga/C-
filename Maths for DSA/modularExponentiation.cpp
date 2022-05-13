//calculate (x^n)%m
#include<iostream>
using namespace std;
int modularExponentiation(int x,int n,int m)
{
    int r=1;
    while(n>0)
    {
        if(n&1)
        {
            //odd
            r=(1LL*(r)*(x)%m)%m;
        }
        x=(1LL*(x)%m*(x)%m)%m;
        n=n>>1;         //same as b=b/2
    }
    return r;
}
int main()
{
    int x,n,m;
    cin>>x>>n>>m;
    cout<<modularExponentiation(x,n,m);
}
