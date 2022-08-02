#include<iostream>
using namespace std;
void sortarray(int *arr,int n)
{
    //Base case
    if(n==0 || n==1)
        return ;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
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
