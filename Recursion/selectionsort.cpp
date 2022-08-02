#include<iostream>
using namespace std;
void sortarray(int *arr,int midindex=0,int n)
{
    //Base case
    if(n==0 || n==1)
        return ;
    for(int i=0n;i<n;i++)
    {
        if(arr[midindex]>arr[i])
            swap(arr[i],arr[i+1]);
    }
    //recursive call
    sortarray(arr,n-1);
}
int main()
{
    int arr[5]={3,5,6,2,1};
    int n=5;
    sortarray(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
