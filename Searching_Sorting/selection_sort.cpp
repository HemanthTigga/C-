#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    int t=0;
    for(int i=0;i<n;i++)
    {
        int minindex=i;
        for(int j=i+j;j<n;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }
        }
        t=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=t;
        t=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
}
