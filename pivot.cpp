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
int main()
{
    vector<int> arr1;
    arr1={8,10,17,1,3};
    cout<<pivot(arr1,5);
    return 0;
}

