#include<iostream>
using namespace std;
//Head recursion
void print1(int n)
{
    if(n==0)
    {
        return;
    }
    print1(n-1);
    cout<<n;
}
//Tail recursion
void print2(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    cout<<n;

    //recursive call
    print2(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Head recursion"<<endl;
    print1(n);
    cout<<endl;
    cout<<endl;
    cout<<"Tail recursion"<<endl;
    print2(n);
    cout<<endl;
}
