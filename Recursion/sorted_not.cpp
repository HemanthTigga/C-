#include<iostream>
using namespace std;
bool issorted(int *arr,int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    //base case
    if(size==0 || size==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    //recursive call
    else
        return (issorted(arr+1,size-1));
}
int main()
{
    int arr[4]={1,2,4,5};
    int n=4;
    if(issorted(arr,n))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}
