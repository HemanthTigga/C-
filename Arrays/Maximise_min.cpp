#include<bits/stdc++.h>
using namespace std;
bool check(int mid, int arr[],int n,int m)
{
    int position = arr[0], elementplaced = 1;
    for(int i =1;i<n;i++)
    {
        if(arr[i] - position >= mid)
        {
            position = arr[i];
            elementplaced++;

            if(elementplaced == m)
                return 1;
        }
    }
    return 0;
}
int main()
{
    int n,m;
    cout<<"enter no of magnets"<<endl;
    cin>>m;
    cout<<"enter no of spaces available"<<endl;
    cin>>n;
    int ans = -1;
    int arr[n];
    cout<<"enter spaces' index"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int front = 0;
    int back = n-1;
    while(front < back)
    {
        int mid = (front + back)/2;
        if(check(arr[mid],arr,m,n))
        {
            ans = max(ans,arr[mid]);
            front = mid+1;
        }
        else
        {
            back = mid;
        }
    }
    cout<<ans;
    return 0;
}
