#include<iostream>
using namespace std;
int factorial(int n)
{
    //base case
    if(n==0)
    return 1;

    //recursive call
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}
