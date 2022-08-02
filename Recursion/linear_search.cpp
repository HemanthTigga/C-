#include<iostream>
using namespace std;
bool ispresent(int arr[],int n,int k)
{
    //cout<<"k="<<k<<endl;
    //cout<<"n="<<n<<endl;
    //cout<<"arr[n]="<<arr[n]<<endl;
    //base case
    if(n<0)
        return false;
    if(k==arr[n])
        return true;

    //recursive call
    return ispresent(arr,n-1,k);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    int k;
    cin>>k;
    if(ispresent(arr,n-1,k))
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
}
