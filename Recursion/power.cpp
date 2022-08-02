#include<iostream>
using namespace std;
int power(long long int a,long long int b)
{
    //base case
    if(b==0)
        return 1;
    if(b==1)
        return a;
    //recursive call
    long long int ans=power(a,b/2);

    if(b%2==0)
        //even case
        return (ans*ans);
    else
        //odd case
        return a*(ans*ans);
}
int main()
{
    long long int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
}
