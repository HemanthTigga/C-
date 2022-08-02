#include<iostream>
using namespace std;
int count(long long nstairs)
{
    //base case
    if(nstairs<0)
        return 0;
    if(nstairs==0)
        return 1;

    //recursive call
    return (count(nstairs-1)+count(nstairs-2));
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
}
//To further reduce time use DP(dynamic programming)
