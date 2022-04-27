#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int> arr,int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
            s=mid+1;
        else
            e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}
int binarysearch(vector<int> arr,int s,int e,int key)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
            return mid;
        if(key>arr[mid])
            start=mid+1;
        if(key<arr[mid])
            end=mid-1;

        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    vector<int> arr1;
    arr1={5,6,1,2,3};
    int n=5;
    int k=2;
    int p=pivot(arr1,n);
    if(k>=arr1[p] && k<=arr1[n-1])
        cout<<binarysearch(arr1,p,n-1,k);
    else
        cout<<binarysearch(arr1,0,p-1,k);
    return 0;
}

